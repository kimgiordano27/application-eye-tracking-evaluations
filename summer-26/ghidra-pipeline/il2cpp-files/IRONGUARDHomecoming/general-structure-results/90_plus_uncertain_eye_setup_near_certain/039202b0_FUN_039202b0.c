/*
FUNCTION_NAME: FUN_039202b0
ENTRY_POINT: 039202b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039204d4) */

undefined8 FUN_039202b0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  
                    /* try { // try from 039202b0 to 03a202e7 has its CatchHandler @ 039202b0
                       catch() { ... } // from try @ 039202b0 with catch @ 039202b0
                       catch() { ... } // from try @ 03920314 with catch @ 039202b0
                       catch() { ... } // from try @ 039203bc with catch @ 039202b0
                       catch() { ... } // from try @ 03920420 with catch @ 039202b0 */
  puVar1 = Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__;
  if ((DAT_04838283 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
                    /* try { // try from 039202e8 to 03a20313 has its CatchHandler @ 0392038c */
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
                    /* try { // try from 03920314 to 03a203a3 has its CatchHandler @ 039202b0 */
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04838283 = 1;
  }
  puVar2 = Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar3 = (long *)FUN_029da4a8(*(undefined8 *)puVar2);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8(plVar3[3],param_2,0);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 039202e8 with catch @ 0392038c
                        */
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
                    /* try { // try from 039203a4 to 03a203bb has its CatchHandler @ 03920418 */
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
        goto LAB_039203d4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 039203bc to 03a20407 has its CatchHandler @ 039202b0 */
  puVar4 = (undefined8 *)
           FUN_01ecb238(param_1,*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__,
                        8);
LAB_039203d4:
  lVar6 = (*(code *)*puVar4)(param_1,puVar4[1]);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar6 + 0x50) = plVar3[3];
  thunk_FUN_01f51358();
                    /* try { // try from 03920408 to 03a20417 has its CatchHandler @ 03920418 */
  uVar9 = *(undefined8 *)Method_System_Convert_ToUInt64__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* catch() { ... } // from try @ 039203a4 with catch @ 03920418
                       catch() { ... } // from try @ 03920408 with catch @ 03920418 */
                    /* try { // try from 0392041c to 03a2041f has its CatchHandler @ 03920428 */
  uVar9 = FUN_03579868(uVar9,0);
                    /* try { // try from 03920420 to 03a2042b has its CatchHandler @ 039202b0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0392041c with catch @ 03920428
                        */
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
      == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_0390bc14(uVar9);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = (**(code **)(*plVar5 + 0x178))(plVar5,param_1,*(undefined8 *)(*plVar5 + 0x180));
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_039204ac;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_039204ac:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return uVar9;
}


