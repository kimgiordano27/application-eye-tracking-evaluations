/*
FUNCTION_NAME: FUN_0621b310
ENTRY_POINT: 0621b310
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_0621b310(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_06dc7117 & 1) == 0) {
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<NetcodeGameObjectsPlayer>__
                );
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<Vector3>__
                );
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedValueEquals<PlayerScoreData>__
                );
                    /* try { // try from 0621b360 to 0631b387 has its CatchHandler @ 0621b740 */
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_FixedString<FixedString128Bytes>__
                );
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_FixedString<FixedString4096Bytes>__
                );
    DAT_06dc7117 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = FUN_04e937e4(*(long *)(param_1 + 0x68),param_2,
                         *(undefined8 *)
                          Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedValueEquals<PlayerScoreData>__
                        );
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 0621b398 to 0631b3ab has its CatchHandler @ 0621b738 */
      local_40 = 0;
      lVar3 = *(long *)(param_1 + 0x68);
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<Vector3>__
                                );
      FUN_045b25dc(uVar2,&local_70,1,0,0,
                   *(undefined8 *)
                    Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<NetcodeGameObjectsPlayer>__
                  );
      if (lVar3 == 0) goto LAB_0621b430;
      FUN_04e935dc(lVar3,param_2,uVar2,
                   *(undefined8 *)
                    Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_FixedString<FixedString4096Bytes>__
                  );
    }
    if (*(long *)(param_1 + 0x68) != 0) {
                    /* try { // try from 0621b408 to 0631b413 has its CatchHandler @ 0621b700 */
      FUN_04e93570(*(long *)(param_1 + 0x68),param_2,
                   *(undefined8 *)
                    Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeSerializer_FixedString<FixedString128Bytes>__
                  );
                    /* try { // try from 0621b428 to 0631b42f has its CatchHandler @ 0621b720 */
      return;
    }
  }
LAB_0621b430:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0621b430 to 0631b4fb has its CatchHandler @ 0621b028 */
  FUN_02d96860();
}


