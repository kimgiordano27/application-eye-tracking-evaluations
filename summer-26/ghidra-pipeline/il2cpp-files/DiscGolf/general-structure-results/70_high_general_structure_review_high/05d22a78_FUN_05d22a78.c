/*
FUNCTION_NAME: FUN_05d22a78
ENTRY_POINT: 05d22a78
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05d22c0c) */
/* WARNING: Removing unreachable block (ram,0x05d22c10) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_05d22a78(long param_1,undefined4 param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_06dc2f40 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
                );
    DAT_06dc2f40 = 1;
  }
  local_38 = *(undefined8 *)(param_1 + 0x78);
  local_3c[0] = '\0';
  FUN_0554bf68(local_38,local_3c,0);
  cVar2 = *(char *)(param_1 + 0x30);
  bVar3 = false;
  lVar4 = param_3;
  if (cVar2 != '\0') {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__ +
                0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar4 = FUN_05d16424(param_3,cVar2);
    bVar3 = true;
  }
  uVar5 = FUN_05d22ddc(param_1,param_2,lVar4,cVar2 != '\0');
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    FUN_05d200b8(param_1,*(undefined8 *)
                          Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
                 ,0);
  }
  if (bVar3) {
    if (lVar4 == 0) goto LAB_05d22c08;
    FUN_054afc38(lVar4,0);
  }
  if (param_3 != 0) {
    FUN_054afc38(param_3,0);
    if (local_3c[0] != '\0') {
      thunk_FUN_02da42ec(local_38,0);
    }
    return !bVar1;
  }
LAB_05d22c08:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


