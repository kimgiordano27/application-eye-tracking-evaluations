/*
FUNCTION_NAME: FUN_03ac3500
ENTRY_POINT: 03ac3500
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


long FUN_03ac3500(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  int iVar22;
  long *plVar23;
  undefined8 local_68;
  
  puVar7 = 
  Field_<PrivateImplementationDetails>_BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0
  ;
  if ((DAT_0453a865 & 1) == 0) {
    FUN_01c5d288(StringLiteral_323);
    FUN_01c5d288(System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    FUN_01c5d288(
                Field_<PrivateImplementationDetails>_D3B16F8D71CB719B941527D5A1ADA7ED83F4EB967FEE117DDA2FE4021E1D283F
                );
    FUN_01c5d288(StringLiteral_331);
    FUN_01c5d288(PTR_DAT_04232b20);
    FUN_01c5d288(StringLiteral_294);
    FUN_01c5d288(StringLiteral_79);
    FUN_01c5d288(PTR_DAT_04232b38);
    FUN_01c5d288(StringLiteral_296);
    FUN_01c5d288(StringLiteral_80);
    FUN_01c5d288(
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__1__
                );
    FUN_01c5d288(StringLiteral_3);
    FUN_01c5d288(StringLiteral_81);
    FUN_01c5d288(StringLiteral_4);
    FUN_01c5d288(PTR_DAT_04232b40);
    FUN_01c5d288(StringLiteral_299);
    FUN_01c5d288(
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass6_0_<CreatePostProcessing>b__3__
                );
    FUN_01c5d288(
                Field_<PrivateImplementationDetails>_BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0
                );
    DAT_0453a865 = 1;
  }
  puVar8 = StringLiteral_331;
  puVar5 = StringLiteral_80;
  puVar6 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass6_0_<CreatePostProcessing>b__3__
  ;
  local_68 = 0;
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar9 = FUN_03aac2f8(param_1);
  plVar10 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar8,2);
  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
  FUN_02d4f880(lVar11,*(undefined8 *)puVar5);
  if (plVar10 == (long *)0x0) goto LAB_03ac3cf0;
  if ((lVar11 != 0) &&
     (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)) {
LAB_03ac3cf8:
    uVar14 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar14,0);
  }
  if ((int)plVar10[3] != 0) {
    plVar10[4] = lVar11;
    lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
    FUN_02d4f880(lVar11,*(undefined8 *)puVar5);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_03ac3cf8;
    puVar7 = 
    Field_<PrivateImplementationDetails>_D3B16F8D71CB719B941527D5A1ADA7ED83F4EB967FEE117DDA2FE4021E1D283F
    ;
    if (1 < *(uint *)(plVar10 + 3)) {
      plVar10[5] = lVar11;
      puVar5 = PTR_DAT_04232b40;
      puVar6 = PTR_DAT_04232b38;
      plVar13 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar7,2);
      lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
      FUN_02d26600(lVar11,*(undefined8 *)puVar6);
      if (plVar13 == (long *)0x0) {
LAB_03ac3cf0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar12 == 0))
      goto LAB_03ac3cf8;
      if ((int)plVar13[3] != 0) {
        plVar13[4] = lVar11;
        lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
        FUN_02d26600(lVar11,*(undefined8 *)puVar6);
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar12 == 0))
        goto LAB_03ac3cf8;
        if (1 < *(uint *)(plVar13 + 3)) {
          plVar13[5] = lVar11;
          puVar6 = StringLiteral_79;
          puVar7 = StringLiteral_4;
          if (lVar9 != 0) {
            if (0 < *(int *)(lVar9 + 0x18)) {
              iVar21 = 0;
              iVar22 = 0;
              plVar20 = (long *)System_ComponentModel_ISynchronizeInvoke_TypeInfo;
              do {
                uVar4 = iVar22 % 2;
                if (*(uint *)(plVar10 + 3) <= uVar4) goto LAB_03ac3cf4;
                plVar23 = plVar10 + (long)(int)uVar4 + 4;
                lVar11 = *plVar23;
                uVar14 = FUN_02d122f8(lVar9,iVar21,*(undefined8 *)puVar7);
                if ((param_4 == 0) ||
                   (uVar14 = FUN_02d4fd88(param_4,uVar14,*(undefined8 *)StringLiteral_81),
                   lVar11 == 0)) goto LAB_03ac3cf0;
                lVar12 = *(long *)(lVar11 + 0x10);
                lVar19 = *(long *)puVar6;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_03ac3cf0;
                uVar17 = *(uint *)(lVar11 + 0x18);
                if (uVar17 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar17 + 1;
                  *(undefined8 *)(lVar12 + (long)(int)uVar17 * 8 + 0x20) = uVar14;
                }
                else {
                  FUN_02d5004c(lVar11,uVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                local_68 = FUN_02d122f8(lVar9,iVar21,*(undefined8 *)puVar7);
                if (param_2 == 0) goto LAB_03ac3cf0;
                uVar14 = *(undefined8 *)(param_2 + 0x10);
                if (*(int *)(*plVar20 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                uVar15 = FUN_03a6b4c8(&local_68,uVar14,0);
                if ((uVar15 & 1) == 0) {
                  local_68 = FUN_02d122f8(lVar9,iVar21,*(undefined8 *)puVar7);
                  if (param_3 == 0) goto LAB_03ac3cf0;
                  uVar14 = *(undefined8 *)(param_3 + 0x10);
                  if (*(int *)(*plVar20 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar15 = FUN_03a6b4c8(&local_68,uVar14,0);
                  if ((uVar15 & 1) != 0) goto LAB_03ac390c;
                }
                else {
LAB_03ac390c:
                  uVar14 = FUN_02d122f8(lVar9,iVar21,*(undefined8 *)puVar7);
                  puVar5 = StringLiteral_81;
                  uVar14 = FUN_02d4fd88(param_4,uVar14,*(undefined8 *)StringLiteral_81);
                  uVar15 = FUN_02d122f8(lVar9,iVar21,*(undefined8 *)puVar7);
                  uVar16 = FUN_02d4fd88(param_4,uVar15 >> 0x20,*(undefined8 *)puVar5);
                  uVar14 = FUN_03aaa1e0(0x3f000000,uVar14,uVar16,0);
                  puVar5 = PTR_DAT_04232b20;
                  if ((*(uint *)(plVar13 + 3) <= uVar4) ||
                     (uVar17 = *(uint *)(plVar10 + 3), uVar17 <= uVar4)) goto LAB_03ac3cf4;
                  if ((*plVar23 == 0) || (lVar11 = plVar13[(long)(int)uVar4 + 4], lVar11 == 0))
                  goto LAB_03ac3cf0;
                  uVar2 = *(undefined4 *)(*plVar23 + 0x18);
                  lVar12 = *(long *)(lVar11 + 0x10);
                  lVar19 = *(long *)PTR_DAT_04232b20;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_03ac3cf0;
                  uVar3 = *(uint *)(lVar11 + 0x18);
                  if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar3 + 1;
                    *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
                  }
                  else {
                    FUN_02d26df8(lVar11,uVar2,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                    ;
                    uVar17 = *(uint *)(plVar10 + 3);
                  }
                  if (uVar17 <= uVar4) goto LAB_03ac3cf4;
                  lVar11 = *plVar23;
                  if (lVar11 == 0) goto LAB_03ac3cf0;
                  lVar12 = *(long *)(lVar11 + 0x10);
                  lVar19 = *(long *)puVar6;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_03ac3cf0;
                  uVar4 = *(uint *)(lVar11 + 0x18);
                  if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar4 + 1;
                    *(undefined8 *)(lVar12 + (long)(int)uVar4 * 8 + 0x20) = uVar14;
                  }
                  else {
                    FUN_02d5004c(lVar11,uVar14,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  iVar1 = iVar22 + 1;
                  uVar4 = iVar22 + 2;
                  if (-1 < iVar1) {
                    uVar4 = iVar22 + 1;
                  }
                  uVar4 = iVar1 - (uVar4 & 0xfffffffe);
                  if (*(uint *)(plVar13 + 3) <= uVar4) goto LAB_03ac3cf4;
                  uVar17 = *(uint *)(plVar10 + 3);
                  if (uVar17 <= uVar4) goto LAB_03ac3cf4;
                  lVar11 = plVar13[(long)(int)uVar4 + 4];
                  lVar12 = plVar10[(long)(int)uVar4 + 4];
                  if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_03ac3cf0;
                  uVar2 = *(undefined4 *)(lVar12 + 0x18);
                  lVar12 = *(long *)(lVar11 + 0x10);
                  lVar19 = *(long *)puVar5;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_03ac3cf0;
                  uVar3 = *(uint *)(lVar11 + 0x18);
                  if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar3 + 1;
                    *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
                  }
                  else {
                    FUN_02d26df8(lVar11,uVar2,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                    ;
                    uVar17 = *(uint *)(plVar10 + 3);
                  }
                  if (uVar17 <= uVar4) goto LAB_03ac3cf4;
                  lVar11 = plVar10[(long)(int)uVar4 + 4];
                  if (lVar11 == 0) goto LAB_03ac3cf0;
                  lVar19 = *(long *)puVar6;
                  lVar12 = *(long *)(lVar11 + 0x10);
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  plVar20 = (long *)System_ComponentModel_ISynchronizeInvoke_TypeInfo;
                  if (lVar12 == 0) goto LAB_03ac3cf0;
                  uVar4 = *(uint *)(lVar11 + 0x18);
                  iVar22 = iVar1;
                  if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar4 + 1;
                    *(undefined8 *)(lVar12 + (long)(int)uVar4 * 8 + 0x20) = uVar14;
                  }
                  else {
                    FUN_02d5004c(lVar11,uVar14,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                iVar21 = iVar21 + 1;
              } while (iVar21 < *(int *)(lVar9 + 0x18));
            }
            puVar7 = StringLiteral_296;
            lVar9 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_299);
            FUN_02d4f880(lVar9,*(undefined8 *)puVar7);
            puVar6 = StringLiteral_323;
            puVar7 = StringLiteral_294;
            if (0 < (int)plVar10[3]) {
              uVar15 = 0;
              uVar18 = plVar10[3] & 0xffffffff;
              do {
                if ((uVar18 <= uVar15) ||
                   (uVar14 = FUN_03ab3b10(plVar10[uVar15 + 4],0), *(uint *)(plVar13 + 3) <= uVar15))
                goto LAB_03ac3cf4;
                lVar12 = plVar13[uVar15 + 4];
                lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
                FUN_03313b6c(lVar11,0);
                *(undefined8 *)(lVar11 + 0x10) = uVar14;
                *(long *)(lVar11 + 0x18) = lVar12;
                if (lVar9 == 0) goto LAB_03ac3cf0;
                lVar12 = *(long *)(lVar9 + 0x10);
                lVar19 = *(long *)puVar7;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_03ac3cf0;
                uVar4 = *(uint *)(lVar9 + 0x18);
                if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar4 + 1;
                  *(long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20) = lVar11;
                }
                else {
                  FUN_02d5004c(lVar9,lVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                uVar18 = (ulong)*(uint *)(plVar10 + 3);
                uVar15 = uVar15 + 1;
              } while ((long)uVar15 < (long)(int)*(uint *)(plVar10 + 3));
            }
            return lVar9;
          }
          goto LAB_03ac3cf0;
        }
      }
    }
  }
LAB_03ac3cf4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


