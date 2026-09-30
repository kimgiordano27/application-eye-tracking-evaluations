/*
FUNCTION_NAME: FUN_05c49df4
ENTRY_POINT: 05c49df4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05c49f78) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05c49df4(undefined8 param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((DAT_06dc288f & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_Remove__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaAttDef>_get_Values__
                );
    DAT_06dc288f = 1;
  }
  if (param_2 != (long *)0x0) {
    if (*param_2 !=
        *(long *)
         Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaAttDef>_get_Values__)
    {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(param_2);
    }
    plVar6 = (long *)param_2[3];
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_Remove__
                     + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_Remove__
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar6);
    }
    thunk_FUN_02da4860();
    iVar2 = thunk_FUN_02dcfa70((long)plVar6 + 0x14,0,0);
    if (iVar2 != 1) {
      thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
      uVar4 = thunk_FUN_02dd3144();
      uVar5 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TryGetValue__
                                );
      FUN_054e8008(uVar4,uVar5,0);
      uVar5 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_ContainsKey__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar4,uVar5);
    }
    if (plVar6[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar3 = FUN_05c449cc(plVar6[4],param_2,0);
    *(undefined4 *)(plVar6 + 8) = uVar3;
    if (plVar6 != (long *)0x0) {
      thunk_FUN_02da4860();
      *(undefined4 *)((long)plVar6 + 0x14) = 0;
      (**(code **)(*plVar6 + 0x188))(plVar6,plVar6,*(undefined8 *)(*plVar6 + 400));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


