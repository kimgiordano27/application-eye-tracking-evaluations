/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$MoveNext
ENTRY_POINT: 04e7a670
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04e7a804) */

uint System_Array_InternalEnumerator<OVRPlugin_Bone>__MoveNext(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x23;
  
  puVar1 = PTR_DAT_08e6a290;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar4 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04e7a6cc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(param_1,*(long *)puVar1,0);
LAB_04e7a6cc:
    uVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if ((uVar2 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244(lVar4);
    }
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04e7a748;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(param_1,lVar4,0);
LAB_04e7a748:
    (*(code *)*puVar3)(param_1,puVar3[1]);
    uVar6 = FUN_04e77820();
  } while ((uVar6 & 1) != 0);
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          System_Array_InternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
          ;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(param_1,*unaff_x23,0);
System_Array_InternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current:
    (*(code *)*puVar3)(param_1,puVar3[1]);
  }
  return (uVar2 ^ 1) & 1;
}


