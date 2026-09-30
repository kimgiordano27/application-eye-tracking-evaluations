/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 01b6ff88
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01b6ff0c) */
/* WARNING: Removing unreachable block (ram,0x01b7006c) */

void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 uVar7;
  int unaff_w26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    (*(code *)param_2[2])(param_1,param_2,param_3,param_4);
    uVar4 = FUN_017fc55c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x88));
    if ((uVar4 & 1) == 0) {
      lVar5 = *unaff_x28;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar5 = *unaff_x28;
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
LAB_01b70068:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_0296ae14(**(long **)(lVar5 + 0xb8),unaff_x27,*(undefined8 *)PTR_DAT_037f9208);
    }
    do {
      unaff_w26 = unaff_w26 + 1;
      if (unaff_w25 == unaff_w26) {
        do {
          lVar5 = *unaff_x28;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
            lVar5 = *unaff_x28;
          }
          lVar6 = **(long **)(lVar5 + 0xb8);
          if (lVar6 == 0) goto LAB_01b70068;
          if (*(int *)(lVar6 + 0x20) < 1) {
            if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
            lVar6 = **(long **)(*unaff_x28 + 0xb8);
            if (lVar6 == 0) goto LAB_01b70068;
          }
          unaff_x24 = FUN_0296afa4(lVar6,*(undefined8 *)PTR_DAT_037f9200);
          if (unaff_x23 == 0) goto LAB_01b70068;
          iVar1 = *(int *)(unaff_x23 + 0x18);
          *(undefined4 *)(unaff_x23 + 0x18) = 0;
          *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_02bf1354(*(undefined8 *)(unaff_x23 + 0x10),0,iVar1,0);
          }
          if (unaff_x24 == 0) goto LAB_01b70068;
          FUN_01afbf48(unaff_x24);
          FUN_0270ae40(unaff_x29 + -0x38);
          *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
          *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x38);
          *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
          while (uVar4 = FUN_022e1404(unaff_x29 + -0x20,
                                      *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x70)),
                (uVar4 & 1) != 0) {
            uVar7 = *(undefined8 *)(unaff_x29 + -0x10);
            lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x60);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0185daa4(lVar5);
            }
            lVar5 = thunk_FUN_01861ac0(uVar7,lVar5);
            lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x60);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_0185daa4(lVar6);
            }
            if (lVar5 != 0) {
              lVar3 = thunk_FUN_01861ac0(lVar5,lVar6);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc944(lVar5,lVar6);
              }
              lVar5 = *(long *)(unaff_x20 + 0x10);
              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              uVar2 = *(uint *)(unaff_x20 + 0x18);
              if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = lVar3;
                thunk_FUN_0188fd20();
              }
              else {
                FUN_0270a444();
              }
            }
          }
          FUN_022e1400(unaff_x29 + -0x20,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x78));
          unaff_w25 = FUN_033f46c8(unaff_x24,0);
        } while (unaff_w25 < 1);
        unaff_w26 = 0;
      }
      param_3 = FUN_033f4af0(unaff_x24,unaff_w26,0);
      if ((unaff_x21 & 1) != 0) {
        if (param_3 == 0) goto LAB_01b70068;
        break;
      }
      if ((param_3 == 0) || (lVar5 = FUN_033e6c58(param_3,0), lVar5 == 0)) goto LAB_01b70068;
      uVar4 = FUN_033e99f0(lVar5,0);
    } while ((uVar4 & 1) == 0);
    param_4 = unaff_x29 + -0x38;
    param_2 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x80);
    param_1 = *param_2;
    *(undefined8 *)(unaff_x29 + -0x38) = unaff_x22;
    unaff_x27 = param_3;
  } while( true );
}


