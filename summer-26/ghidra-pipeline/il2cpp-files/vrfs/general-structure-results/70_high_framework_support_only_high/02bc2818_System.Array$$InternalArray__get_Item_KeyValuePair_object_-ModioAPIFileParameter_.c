/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-ModioAPIFileParameter>>
ENTRY_POINT: 02bc2818
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__get_Item<KeyValuePair<object,_ModioAPIFileParameter>>
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint in_w9;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  ulong uVar13;
  float unaff_s8;
  float unaff_s9;
  
  if (2 < in_w9) {
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0xfc) = param_5;
    *(undefined4 *)(param_1 + 0x100) = 0;
    lVar7 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_02bc2ac0;
      *(undefined4 *)(lVar7 + 0x164) = param_4;
      *(undefined4 *)(lVar7 + 0x168) = param_5;
      *(undefined4 *)(lVar7 + 0x16c) = 0;
      if (*(char *)(unaff_x24 + 0x89c) == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e4d340);
        *(undefined1 *)(unaff_x24 + 0x89c) = 1;
      }
      fVar10 = unaff_s9 - **(float **)(*unaff_x25 + 0xb8);
      fVar12 = unaff_s8 - (*(float **)(*unaff_x25 + 0xb8))[1];
      if (DAT_0534bf7c <= fVar10 * fVar10 + fVar12 * fVar12) {
        if (*(long *)(unaff_x19 + 0x1a0) == 0) goto LAB_02bc27c8;
        uVar2 = *(uint *)(*(long *)(unaff_x19 + 0x1a0) + 0x18);
        if (0 < (int)uVar2) {
          uVar9 = 0;
          do {
            if (uVar2 <= uVar9) goto LAB_02bc2ac0;
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar2);
        }
      }
      if (unaff_x20 != 0) {
        FUN_0309de40();
        iVar1 = FUN_04882fc0(0);
        if ((*(long *)(unaff_x19 + 0x100) != 0) &&
           (lVar7 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar7 != 0)) {
          uVar2 = FUN_036e1214(lVar7,0);
          if (0 < (int)uVar2) {
            lVar7 = *unaff_x26;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar7 = *unaff_x26;
            }
            lVar8 = **(long **)(lVar7 + 0xb8);
            if (lVar8 == 0) goto LAB_02bc27c8;
            if ((int)uVar2 < *(int *)(lVar8 + 0x18)) {
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar8 = **(long **)(*unaff_x26 + 0xb8);
                if (lVar8 == 0) goto LAB_02bc27c8;
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_02bc2ac0;
              lVar7 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_02bc27c8;
              iVar1 = FUN_051d0f1c(lVar7,0);
            }
          }
          if ((*(long *)(unaff_x19 + 0x100) != 0) &&
             (lVar7 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar7 != 0)) {
            iVar3 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar7,0);
            if (iVar3 == 0) {
              uVar4 = 0;
            }
            else {
              if ((*(long *)(unaff_x19 + 0x100) == 0) ||
                 (lVar7 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar7 == 0))
              goto LAB_02bc27c8;
              uVar4 = FUN_036e1620(lVar7,0);
            }
            if ((*(long *)(unaff_x19 + 0x1b0) != 0) &&
               (lVar7 = FUN_051e516c(*(long *)(unaff_x19 + 0x1b0),0), lVar7 != 0)) {
              lVar7 = FUN_051df7a8(lVar7,0);
              lVar8 = *(long *)(unaff_x19 + 0x1a0);
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x18) == 0) goto LAB_02bc2ac0;
                if (lVar7 != 0) {
                  uVar13 = (ulong)*(uint *)(lVar8 + 0x24);
                  uVar5 = (ulong)*(uint *)(lVar8 + 0x28);
                  uVar11 = FUN_04f1c778(*(undefined4 *)(lVar8 + 0x20),uVar13,uVar5,lVar7,0);
                  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  uVar11 = FUN_036df8cc(uVar11,uVar13,uVar5,uVar4,0);
                  uVar4 = FUN_02bba0b8();
                  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    thunk_FUN_016466fc(*unaff_x22);
                  }
                  uVar5 = FUN_051d2ac0(uVar4,0,0);
                  if ((uVar5 & 1) != 0) {
                    plVar6 = (long *)FUN_02bba0b8();
                    if (plVar6 == (long *)0x0) goto LAB_02bc27c8;
                    (**(code **)(*plVar6 + 0x288))
                              (uVar11,(float)iVar1 - (float)uVar13,plVar6,
                               *(undefined8 *)(*plVar6 + 0x290));
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
LAB_02bc27c8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
LAB_02bc2ac0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


