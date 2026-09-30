/*
FUNCTION_NAME: FUN_03ae2d10
ENTRY_POINT: 03ae2d10
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03ae3384) */
/* WARNING: Removing unreachable block (ram,0x03ae31e8) */
/* WARNING: Removing unreachable block (ram,0x03ae32f8) */

void FUN_03ae2d10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined4 local_64;
  
  puVar2 = StringLiteral_1705;
  if ((DAT_044ab7f1 & 1) == 0) {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                );
    FUN_01d7d918(PTR_DAT_0423d050);
    FUN_01d7d918(PTR_DAT_0423d058);
    FUN_01d7d918(PTR_DAT_0423d060);
    FUN_01d7d918(PTR_DAT_0423d068);
    FUN_01d7d918(StringLiteral_2252);
    FUN_01d7d918(PTR_DAT_0423d070);
    FUN_01d7d918(StringLiteral_2253);
    FUN_01d7d918(PTR_DAT_0423d078);
    FUN_01d7d918(StringLiteral_2254);
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads);
    FUN_01d7d918(PTR_DAT_0423d020);
    FUN_01d7d918(PTR_DAT_0423d028);
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial);
    FUN_01d7d918(PTR_DAT_0423d030);
    FUN_01d7d918(PTR_DAT_0423d038);
    FUN_01d7d918(StringLiteral_1705);
    FUN_01d7d918(StringLiteral_1323);
    FUN_01d7d918(PTR_DAT_0423d080);
    FUN_01d7d918(PTR_DAT_0423d088);
    FUN_01d7d918(PTR_DAT_0423d090);
    DAT_044ab7f1 = 1;
  }
  puVar3 = PTR_DAT_0423d050;
  lVar7 = *(long *)puVar2;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar7 = *(long *)puVar2;
  }
  puVar1 = 
  Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
  ;
  uVar8 = FUN_020a63bc(*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20),*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_0423d088;
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03d40fd0(*(undefined8 *)puVar3,0);
    return;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
  if (lVar7 != 0) {
    local_64 = *(undefined4 *)(lVar7 + 0x20);
    uVar9 = FUN_03390e50(&local_64,0);
    uVar9 = FUN_0326dc80(uVar9,*(undefined8 *)PTR_DAT_0423d080,0);
    lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar7 != 0) {
      FUN_02f176a8(&local_98,lVar7,*(undefined8 *)PTR_DAT_0423d070);
      puVar5 = PTR_DAT_0423d060;
      puVar4 = PTR_DAT_0423d030;
      puVar1 = PTR_DAT_0423d028;
      puVar3 = PTR_DAT_0423d020;
      puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      do {
        uVar8 = FUN_02c5240c(&local_80,*(undefined8 *)puVar5);
        plVar6 = local_70;
        if ((uVar8 & 1) == 0) {
          System_Collections_Generic_EqualityComparer<JobHandle>___ctor
                    (&local_80,*(undefined8 *)PTR_DAT_0423d058);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_03d41b48(uVar9,0);
          return;
        }
        lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_2254);
        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                  (lVar7,*(undefined8 *)StringLiteral_2253);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar14 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0423d038) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03ae2fc4;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)PTR_DAT_0423d038,0);
LAB_03ae2fc4:
        plVar11 = (long *)(*(code *)*puVar10)(plVar6,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar14 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03ae3024;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_01dde8fc(plVar11,*(long *)puVar3,0);
LAB_03ae3024:
        plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        do {
          lVar14 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03ae3084;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_01dde8fc(plVar11,*(long *)puVar2,0);
LAB_03ae3084:
          uVar8 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if ((uVar8 & 1) == 0) goto LAB_03ae3170;
          lVar14 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03ae30e0;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_01dde8fc(plVar11,*(long *)puVar1,0);
LAB_03ae30e0:
          plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          lVar14 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_03ae3144;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_01dde8fc(plVar12,*(long *)puVar4,1);
LAB_03ae3144:
          uVar8 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        } while ((uVar8 & 1) != 0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_02f17d24(lVar7,plVar12,*(undefined8 *)StringLiteral_2252);
LAB_03ae3170:
        if (plVar11 != (long *)0x0) {
          lVar14 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)
                   Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03ae31d0;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01dde8fc(plVar11,*(long *)
                                          Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                                 ,0);
LAB_03ae31d0:
          (*(code *)*puVar10)(plVar11,puVar10[1]);
        }
        if (*(int *)(*(long *)StringLiteral_1323 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar13 = FUN_03ae8944(lVar7,0);
        uVar13 = FUN_0326cb0c(*(undefined8 *)PTR_DAT_0423d090,plVar6,uVar13,0);
        uVar9 = FUN_0326dc80(uVar9,uVar13,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


