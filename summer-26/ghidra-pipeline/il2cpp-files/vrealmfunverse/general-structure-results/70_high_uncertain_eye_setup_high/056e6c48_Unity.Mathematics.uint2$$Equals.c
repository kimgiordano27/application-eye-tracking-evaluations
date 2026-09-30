/*
FUNCTION_NAME: Unity.Mathematics.uint2$$Equals
ENTRY_POINT: 056e6c48
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_uint2__Equals(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar10;
  
  if (unaff_x21 != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x30);
    *(undefined4 *)(unaff_x21 + 0xb0) = 0;
    if (lVar9 != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x60);
      *(int *)(unaff_x21 + 0xb4) = (int)*(undefined8 *)(lVar9 + 0x18);
      *(undefined4 *)(unaff_x21 + 0xb8) = 0;
      if (lVar3 == 0) {
        *(undefined4 *)(unaff_x21 + 0xbc) = 0;
      }
      else {
        uVar2 = FUN_056fb378(lVar3,0);
        lVar9 = *(long *)(unaff_x19 + 0x50);
        *(undefined4 *)(unaff_x21 + 0xbc) = uVar2;
        unaff_x21 = lVar9;
        if (lVar9 == 0) goto LAB_056e6d80;
      }
      uVar4 = FUN_03114e6c(*unaff_x20,0,*(undefined4 *)(unaff_x21 + 0xbc),
                           *(undefined8 *)
                            Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__);
      if ((uVar4 & 1) == 0) {
LAB_056e718c:
        *(uint *)(unaff_x19 + 200) = *(uint *)(unaff_x19 + 200) | 0xc;
        return;
      }
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        plVar5 = (long *)FUN_02b3c908(*(undefined8 *)
                                       Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                                      ,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0xbc));
        puVar1 = Method_Newtonsoft_Json_Linq_JEnumerable<JToken>__ctor__;
        lVar9 = *(long *)(unaff_x19 + 0x50);
        if (lVar9 != 0) {
          uVar10 = 0;
          lVar3 = 4;
          do {
            uVar4 = lVar3 - 4;
            if ((long)*(int *)(lVar9 + 0xbc) <= (long)uVar4) {
              *(long **)(unaff_x19 + 0x40) = plVar5;
              thunk_FUN_02bb0e9c();
              if (*(long *)(unaff_x19 + 0x50) != 0) {
                *(uint *)(*(long *)(unaff_x19 + 0x50) + 0xbc) = uVar10;
                goto LAB_056e718c;
              }
              break;
            }
            lVar9 = *unaff_x20;
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_056e71b8;
            uVar6 = FUN_030f2aa8(plVar5,*(undefined8 *)(lVar9 + lVar3 * 8),*(undefined8 *)puVar1);
            if ((uVar6 & 1) == 0) {
              lVar9 = *unaff_x20;
              if (lVar9 == 0) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar4) {
LAB_056e71b8:
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              if (plVar5 == (long *)0x0) break;
              lVar9 = *(long *)(lVar9 + lVar3 * 8);
              if ((lVar9 != 0) &&
                 (lVar7 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
                uVar8 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar8,0);
              }
              if (*(uint *)(plVar5 + 3) <= uVar10) goto LAB_056e71b8;
              plVar5[(long)(int)uVar10 + 4] = lVar9;
              thunk_FUN_02bb0e9c(plVar5 + (long)(int)uVar10 + 4,lVar9);
              uVar10 = uVar10 + 1;
            }
            lVar9 = *(long *)(unaff_x19 + 0x50);
            lVar3 = lVar3 + 1;
          } while (lVar9 != 0);
        }
      }
    }
  }
LAB_056e6d80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


