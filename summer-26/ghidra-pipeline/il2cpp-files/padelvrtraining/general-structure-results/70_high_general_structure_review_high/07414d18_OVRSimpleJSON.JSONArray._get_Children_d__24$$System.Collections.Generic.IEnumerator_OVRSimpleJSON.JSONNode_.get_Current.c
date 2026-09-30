/*
FUNCTION_NAME: OVRSimpleJSON.JSONArray.<get_Children>d__24$$System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current
ENTRY_POINT: 07414d18
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void OVRSimpleJSON_JSONArray_<get_Children>d__24__System_Collections_Generic_IEnumerator<OVRSimpleJSON_JSONNode>_get_Current
               (void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int in_w8;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w24;
  int unaff_w26;
  long *unaff_x27;
  int unaff_w28;
  int iVar8;
  undefined8 in_stack_00000008;
  
  do {
    if (unaff_w26 == in_w8) {
      return;
    }
    if (0 < unaff_w28) {
      iVar8 = 0;
      do {
        lVar5 = *unaff_x19;
        if (lVar5 == 0) {
LAB_07414d48:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *unaff_x27;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_07414d48;
        uVar4 = *(uint *)(lVar5 + 0x18);
        iVar2 = unaff_w24 + iVar8;
        if (uVar4 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar4 + 1;
          *(int *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = iVar2;
        }
        else {
          FUN_059d0e24(lVar5,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
          lVar5 = *unaff_x19;
          if (lVar5 == 0) goto LAB_07414d48;
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *unaff_x27;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_07414d48;
        uVar4 = *(uint *)(lVar5 + 0x18);
        iVar3 = unaff_w20 + unaff_w24 + iVar8;
        iVar1 = iVar3 + 1;
        if (uVar4 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar4 + 1;
          *(int *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = iVar1;
        }
        else {
          FUN_059d0e24(lVar5,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
          lVar5 = *unaff_x19;
          if (lVar5 == 0) goto LAB_07414d48;
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *unaff_x27;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_07414d48;
        uVar4 = *(uint *)(lVar5 + 0x18);
        if (uVar4 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar4 + 1;
          *(int *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = iVar2 + 1;
        }
        else {
          FUN_059d0e24(lVar5,iVar2 + 1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          lVar5 = *unaff_x19;
          if (lVar5 == 0) goto LAB_07414d48;
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *unaff_x27;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_07414d48;
        uVar4 = *(uint *)(lVar5 + 0x18);
        if (uVar4 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar4 + 1;
          *(int *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = iVar2;
        }
        else {
          FUN_059d0e24(lVar5,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
          lVar5 = *unaff_x19;
          if (lVar5 == 0) goto LAB_07414d48;
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *unaff_x27;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_07414d48;
        uVar4 = *(uint *)(lVar5 + 0x18);
        if (uVar4 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar4 + 1;
          *(int *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = iVar3;
        }
        else {
          FUN_059d0e24(lVar5,iVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
          lVar5 = *unaff_x19;
          if (lVar5 == 0) goto LAB_07414d48;
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *unaff_x27;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_07414d48;
        uVar4 = *(uint *)(lVar5 + 0x18);
        if (uVar4 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar4 + 1;
          *(int *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = iVar1;
        }
        else {
          FUN_059d0e24(lVar5,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        iVar8 = iVar8 + 1;
      } while (unaff_w28 != iVar8);
    }
    unaff_w26 = unaff_w26 + 1;
    unaff_w24 = unaff_w24 + unaff_w20;
    in_w8 = in_stack_00000008._4_4_;
  } while( true );
}


