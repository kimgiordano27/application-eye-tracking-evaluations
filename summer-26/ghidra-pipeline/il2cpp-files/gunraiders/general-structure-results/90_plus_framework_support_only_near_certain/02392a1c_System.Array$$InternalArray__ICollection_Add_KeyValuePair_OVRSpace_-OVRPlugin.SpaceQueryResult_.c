/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 02392a1c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02392cc4) */
/* WARNING: Removing unreachable block (ram,0x02392e24) */

void System_Array__InternalArray__ICollection_Add<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (long *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long *unaff_x28;
  long unaff_x29;
  
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01c72394(lVar6);
  }
  if (param_1 != (long *)0x0) {
    if (*(byte *)(*param_1 + 0x130) < *(byte *)(lVar6 + 0x130)) {
      param_1 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) !=
             lVar6) {
      param_1 = (long *)0x0;
    }
  }
  lVar6 = *unaff_x28;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar6 = *unaff_x28;
  }
  if ((**(long **)(lVar6 + 0xb8) != 0) &&
     (FUN_02fc9d38(**(long **)(lVar6 + 0xb8),*(undefined8 *)TMPro_KerningTable_TypeInfo),
     **(long **)(*unaff_x28 + 0xb8) != 0)) {
    FUN_02fca078();
    while( true ) {
      lVar6 = *unaff_x28;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar6 = *unaff_x28;
      }
      lVar7 = **(long **)(lVar6 + 0xb8);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x20) < 1) {
        if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar7 = **(long **)(*unaff_x28 + 0xb8);
        if (lVar7 == 0) break;
      }
      lVar6 = FUN_02fca1fc(lVar7,*(undefined8 *)Reign_MobileInputCapture_Key_TypeInfo);
      if (param_1 == (long *)0x0) break;
      lVar7 = param_1[3];
      *(undefined4 *)(param_1 + 3) = 0;
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      if (0 < (int)lVar7) {
        FUN_032f3ffc(param_1[2],0,(int)lVar7,0);
      }
      if (lVar6 == 0) break;
      FUN_0230ca9c(lVar6,param_1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
      FUN_02d50a3c(unaff_x29 + -0x38,param_1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x38));
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
      while (uVar3 = FUN_029fd614(unaff_x29 + -0x20,
                                  *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x70)),
            (uVar3 & 1) != 0) {
        uVar8 = *(undefined8 *)(unaff_x29 + -0x10);
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x60);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01c72394(lVar7);
        }
        lVar7 = thunk_FUN_01c495e4(uVar8,lVar7);
        lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x60);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394(lVar10);
        }
        if (lVar7 != 0) {
          lVar4 = thunk_FUN_01c495e4(lVar7,lVar10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar7,lVar10);
          }
          lVar7 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
          }
          else {
            FUN_02d5004c();
          }
        }
      }
      FUN_029fd610(unaff_x29 + -0x20,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x78));
      iVar2 = FUN_03d5800c(lVar6,0);
      if (0 < iVar2) {
        iVar9 = 0;
        do {
          lVar7 = FUN_03d58660(lVar6,iVar9,0);
          if ((unaff_x21 & 1) == 0) {
            if ((lVar7 == 0) || (lVar10 = FUN_03d468e8(lVar7,0), lVar10 == 0)) goto LAB_02392e20;
            uVar3 = FUN_03d49a30(lVar10,0);
            if ((uVar3 & 1) != 0) goto LAB_02392d24;
          }
          else {
            if (lVar7 == 0) goto LAB_02392e20;
LAB_02392d24:
            puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x80);
            uVar8 = *puVar5;
            *(undefined8 *)(unaff_x29 + -0x38) = unaff_x22;
            (*(code *)puVar5[2])(uVar8,puVar5,lVar7,unaff_x29 + -0x38);
            uVar3 = FUN_01c5d464(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x88));
            if ((uVar3 & 1) == 0) {
              lVar10 = *unaff_x28;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
                lVar10 = *unaff_x28;
              }
              if (**(long **)(lVar10 + 0xb8) == 0) goto LAB_02392e20;
              FUN_02fca078(**(long **)(lVar10 + 0xb8),lVar7,
                           *(undefined8 *)Mono_Security_Cryptography_KeyBuilder_TypeInfo);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar2 != iVar9);
      }
    }
  }
LAB_02392e20:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


