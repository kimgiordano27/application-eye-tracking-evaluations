/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 023b57a4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023b585c) */
/* WARNING: Removing unreachable block (ram,0x023b5900) */

void System_Array__InternalArray__ICollection_Contains<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int unaff_w23;
  long *unaff_x28;
  
  do {
    uVar1 = FUN_02d4fd88();
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(uVar1,uVar1);
    }
    FUN_03ec2180(param_1,uVar1,0);
    plVar2 = (long *)FUN_02d4fd88();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    (**(code **)(*plVar2 + 0x198))(plVar2,param_1,*(undefined8 *)(*plVar2 + 0x1a0));
    lVar4 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_023b5844;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(param_1,*unaff_x28,0);
LAB_023b5844:
    (*(code *)*puVar3)(param_1,puVar3[1]);
    unaff_w23 = unaff_w23 + -1;
    if (unaff_w23 < 0) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonSerializationException_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03e3c18c();
      return;
    }
    param_1 = (long *)FUN_02f82518();
  } while( true );
}


