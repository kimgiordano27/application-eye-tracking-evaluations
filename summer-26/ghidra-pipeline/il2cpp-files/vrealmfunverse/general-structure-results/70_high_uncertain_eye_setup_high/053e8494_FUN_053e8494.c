/*
FUNCTION_NAME: FUN_053e8494
ENTRY_POINT: 053e8494
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined8 FUN_053e8494(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  
                    /* try { // try from 053e84b8 to 054e84bb has its CatchHandler @ 053ea2c4 */
                    /* try { // try from 053e84bc to 054e84d3 has its CatchHandler @ 053ea5d8 */
  if ((DAT_066d0a57 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_0_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_02b3c81c(Autohand_PlacePointSoundEffects_<WaitToActivate>d__10_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06322478);
    FUN_02b3c81c(PTR_DAT_0632ba98);
    FUN_02b3c81c(PTR_DAT_063374b8);
    FUN_02b3c81c(RootMotion_Demos_Platform_<NewTargetPos>d__13_TypeInfo);
    FUN_02b3c81c(Firebase_Platform_PlatformInformation_<>c_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
    FUN_02b3c81c(PTR_DAT_063374d8);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo);
    FUN_02b3c81c(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo);
    FUN_02b3c81c(PlatformMover_<Move>d__4_TypeInfo);
    DAT_066d0a57 = 1;
  }
  puVar4 = OVRPlugin_OVRP_1_0_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_0_1_0_TypeInfo;
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x6c8))(plVar6,0x18,*(undefined8 *)(*plVar6 + 0x6d0));
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_0452d044(uVar8,*(undefined8 *)puVar4);
    puVar5 = Firebase_Platform_PlatformInformation_<>c_TypeInfo;
    puVar4 = RootMotion_Demos_Platform_<NewTargetPos>d__13_TypeInfo;
    puVar3 = PTR_DAT_063374d8;
    if (lVar7 != 0) {
      uVar9 = thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo)
      ;
      FUN_037a5d48(uVar9,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)puVar4);
      lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
      FUN_037579e4(lVar10,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)puVar5);
      puVar4 = PTR_DAT_0632ba98;
      puVar3 = PTR_DAT_06322478;
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar20 = 0;
        uVar16 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar16 <= uVar20) goto LAB_053e8c14;
          plVar18 = *(long **)(lVar7 + uVar20 * 8 + 0x20);
          if (*(char *)(param_1 + 0x62) != '\0') {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar11 = FUN_053e8d6c();
            if (plVar18 == (long *)0x0) goto LAB_053e8b90;
            lVar12 = (**(code **)(*plVar18 + 0x218))
                               (plVar18,uVar11,0,*(undefined8 *)(*plVar18 + 0x220));
            if ((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) {
              bVar2 = false;
LAB_053e87bc:
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar11 = FUN_053e8e70();
              lVar12 = (**(code **)(*plVar18 + 0x218))
                                 (plVar18,uVar11,0,*(undefined8 *)(*plVar18 + 0x220));
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) {
                if (bVar2) goto System_Xml_Schema_XmlBaseConverter__ToString;
                goto LAB_053e8988;
              }
              plVar19 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
              lVar7 = FUN_053d6158();
              if (plVar19 == (long *)0x0) goto LAB_053e8b90;
              if ((lVar7 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
              {
LAB_053e8bfc:
                uVar8 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar8,0);
              }
              if ((int)plVar19[3] == 0) {
LAB_053e8c14:
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              plVar19[4] = lVar7;
              thunk_FUN_02bb0e9c(plVar19 + 4,lVar7);
              lVar7 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
              if ((lVar7 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
              goto LAB_053e8bfc;
              if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_053e8c14;
              plVar19[5] = lVar7;
              thunk_FUN_02bb0e9c(plVar19 + 5,lVar7);
              puVar13 = (undefined8 *)
                        Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo;
            }
            else {
              iVar15 = (int)*(long *)(lVar12 + 0x18);
              if (iVar15 < 2) {
                if (iVar15 == 0) goto LAB_053e8c14;
                plVar19 = *(long **)(lVar12 + 0x20);
                if ((plVar19 != (long *)0x0) &&
                   (*plVar19 !=
                    *(long *)Autohand_PlacePointSoundEffects_<WaitToActivate>d__10_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3ce44(plVar19);
                }
                lVar12 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
                FUN_053e521c(lVar12,plVar18);
                if (plVar19 == (long *)0x0) goto LAB_053e8b90;
                if ((char)plVar19[3] == '\0') {
                  lVar14 = (**(code **)(*plVar18 + 0x1b8))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                }
                else {
                  lVar14 = plVar19[2];
                  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x10) == 0)) {
                    plVar19 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
                    lVar7 = (**(code **)(*plVar18 + 0x1b8))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                    if (plVar19 != (long *)0x0) {
                      if ((lVar7 != 0) &&
                         (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar19 + 0x40)),
                         lVar10 == 0)) goto LAB_053e8bfc;
                      if ((int)plVar19[3] == 0) goto LAB_053e8c14;
                      plVar19[4] = lVar7;
                      thunk_FUN_02bb0e9c(plVar19 + 4,lVar7);
                      lVar7 = FUN_053d6158(plVar6);
                      if ((lVar7 != 0) &&
                         (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar19 + 0x40)),
                         lVar10 == 0)) goto LAB_053e8bfc;
                      if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_053e8c14;
                      plVar19[5] = lVar7;
                      thunk_FUN_02bb0e9c(plVar19 + 5,lVar7);
                      uVar8 = *(undefined8 *)
                               Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
                      ;
                      goto LAB_053e8c38;
                    }
                    goto LAB_053e8b90;
                  }
                }
                if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
                  *(long *)(*(long *)(lVar12 + 0x10) + 0x18) = lVar14;
                  thunk_FUN_02bb0e9c();
                  FUN_053cd398(uVar9,lVar12,uVar8,0);
                  bVar2 = true;
                  goto LAB_053e87bc;
                }
                goto LAB_053e8b90;
              }
              plVar19 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
              (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
              lVar7 = FUN_053d6158();
              if (plVar19 == (long *)0x0) goto LAB_053e8b90;
              if ((lVar7 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
              goto LAB_053e8bfc;
              if ((int)plVar19[3] == 0) goto LAB_053e8c14;
              plVar19[4] = lVar7;
              thunk_FUN_02bb0e9c(plVar19 + 4,lVar7);
              lVar7 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
              if ((lVar7 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
              goto LAB_053e8bfc;
              if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_053e8c14;
              plVar19[5] = lVar7;
              thunk_FUN_02bb0e9c(plVar19 + 5,lVar7);
              puVar13 = (undefined8 *)PlatformMover_<Move>d__4_TypeInfo;
            }
            uVar8 = *puVar13;
LAB_053e8c38:
            uVar8 = FUN_0540ce80(uVar8,plVar19,0);
            lVar7 = FUN_053e3650(param_1,uVar8);
            return *(undefined8 *)(lVar7 + 0x50);
          }
          if (plVar18 == (long *)0x0) goto LAB_053e8b90;
          uVar16 = FUN_04cb80cc(plVar18,0);
          if ((uVar16 & 1) == 0) {
            lVar12 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
            FUN_053e521c(lVar12,plVar18);
            uVar11 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
            if ((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) goto LAB_053e8b90;
            *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x18) = uVar11;
            thunk_FUN_02bb0e9c();
            FUN_053cd398(uVar9,lVar12,uVar8,0);
System_Xml_Schema_XmlBaseConverter__ToString:
            lVar12 = (**(code **)(*plVar18 + 0x2d8))(plVar18,0,*(undefined8 *)(*plVar18 + 0x2e0));
            if (*(char *)(param_1 + 0x60) == '\0') {
              if (lVar12 == 0) goto LAB_053e8b90;
              uVar11 = *(undefined8 *)puVar4;
              lVar14 = thunk_FUN_02b79548(lVar12,uVar11);
              if (lVar14 == 0) goto LAB_053e89e8;
              lVar14 = *(long *)puVar4;
              plVar18 = (long *)thunk_FUN_02b79548(lVar12,lVar14);
              if (plVar18 == (long *)0x0) goto System_Xml_Schema_XmlBaseConverter__ToString;
              lVar12 = *plVar18;
              uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar14) {
                    iVar15 = *piVar17 + 9;
                    goto System_Xml_Schema_XmlBaseConverter__ToString;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              uVar11 = 9;
            }
            else {
              if (lVar12 == 0) goto LAB_053e8b90;
              uVar11 = *(undefined8 *)puVar4;
              lVar14 = thunk_FUN_02b79548(lVar12,uVar11);
              if (lVar14 == 0) {
LAB_053e89e8:
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(lVar12,uVar11);
              }
              lVar14 = *(long *)puVar4;
              plVar18 = (long *)thunk_FUN_02b79548(lVar12,lVar14);
              if (plVar18 == (long *)0x0) {
System_Xml_Schema_XmlBaseConverter__ToString:
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(lVar12,lVar14);
              }
              lVar12 = *plVar18;
              uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
LAB_053e8864:
                if (*(long *)(piVar17 + -2) != lVar14) goto LAB_053e8870;
                iVar15 = *piVar17 + 10;
System_Xml_Schema_XmlBaseConverter__ToString:
                puVar13 = (undefined8 *)(lVar12 + (long)iVar15 * 0x10 + 0x138);
                goto LAB_053e8918;
              }
LAB_053e887c:
              uVar11 = 10;
            }
            puVar13 = (undefined8 *)FUN_02b7654c(plVar18,lVar14,uVar11);
LAB_053e8918:
            uVar11 = (*(code *)*puVar13)(plVar18,0,puVar13[1]);
            if (lVar10 == 0) goto LAB_053e8b90;
            lVar12 = *(long *)(lVar10 + 0x10);
            lVar14 = *(long *)PTR_DAT_063374b8;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_053e8b90;
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
            }
            else {
              FUN_037581f8(lVar10,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
LAB_053e8988:
          uVar16 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar20 = uVar20 + 1;
        } while ((long)uVar20 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      thunk_FUN_02b4aae0(0);
      *(undefined8 *)(param_1 + 0x50) = uVar9;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x50),uVar9);
      *(long *)(param_1 + 0x58) = lVar10;
      uVar8 = thunk_FUN_02bb0e9c((long *)(param_1 + 0x58),lVar10);
      return uVar8;
    }
  }
LAB_053e8b90:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_053e8870:
  uVar16 = uVar16 - 1;
  piVar17 = piVar17 + 4;
  if (uVar16 == 0) goto LAB_053e887c;
  goto LAB_053e8864;
}


