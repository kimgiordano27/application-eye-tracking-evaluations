/*
FUNCTION_NAME: il2cpp_stats_dump_to_file
ENTRY_POINT: 0332b068
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 il2cpp_stats_dump_to_file(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined1 auStack_188 [8];
  uint auStack_180 [40];
  undefined *local_e0 [17];
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  puVar3 = Method_OVRTask_FromResult<OVRResult<Guid,_OVRColocationSession_Result>>__;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar1 = Method_OVRTask_FromResult<OVRResult<Guid,_OVRColocationSession_Result>>__ + 0x40;
  local_1a0 = Method_OVRTask_FromResult<OVRResult<ulong,_OVRPlugin_Result>>__ + 0x18;
  local_e0[0] = Method_OVRTask_FromResult<OVRResult<ulong,_OVRPlugin_Result>>__ + 0x40;
  local_198 = 0;
  local_190 = puVar1;
  std::__ndk1::ios_base::init((ios_base *)local_e0,auStack_188);
  local_1a0 = puVar3 + 0x18;
  local_e0[0] = puVar3 + 0x68;
  local_50 = 0xffffffff;
  local_58 = 0;
  local_190 = puVar1;
  FUN_0332cef8(auStack_188);
  FUN_0332b398(&local_1a0,param_1,0x30);
  pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_0332d148(&local_190,"New object count: ",0x12);
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar4,DAT_076ec8d0);
  FUN_0332d148(uVar5,&DAT_013e53e9,1);
  pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_0332d148(&local_190,"Method count: ",0xe);
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar4,DAT_076ec8e0);
  FUN_0332d148(uVar5,&DAT_013e53e9,1);
  pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_0332d148(&local_190,"Class static data size: ",0x18);
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar4,DAT_076ec8e8);
  FUN_0332d148(uVar5,&DAT_013e53e9,1);
  pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_0332d148(&local_190,"Inflated method count: ",0x17);
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar4,DAT_076ec900);
  FUN_0332d148(uVar5,&DAT_013e53e9,1);
  pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_0332d148(&local_190,"Inflated type count: ",0x15);
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar4,DAT_076ec908);
  FUN_0332d148(uVar5,&DAT_013e53e9,1);
  pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_0332d148(&local_190,"Initialized class count: ",0x19);
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar4,DAT_076ec8d8);
  FUN_0332d148(uVar5,&DAT_013e53e9,1);
  pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_0332d148(&local_190,"Generic instance count: ",0x18);
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar4,DAT_076ec8f0);
  FUN_0332d148(uVar5,&DAT_013e53e9,1);
  pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_0332d148(&local_190,"Generic class count: ",0x15);
  uVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar4,DAT_076ec8f8);
  FUN_0332d148(uVar5,&DAT_013e53e9,1);
  lVar6 = FUN_0332c4c0(auStack_188);
  if (lVar6 == 0) {
    std::__ndk1::ios_base::clear
              ((ios_base *)((long)&local_1a0 + *(long *)(local_1a0 + -0x18)),
               *(uint *)((long)auStack_180 + *(long *)(local_1a0 + -0x18)) | 4);
  }
  local_1a0 = puVar3 + 0x18;
  local_e0[0] = puVar3 + 0x68;
  local_190 = puVar3 + 0x40;
  FUN_0332c448(auStack_188);
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_1a0);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_e0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


