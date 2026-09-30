/*
FUNCTION_NAME: FUN_01a9b7e0
ENTRY_POINT: 01a9b7e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01a9b9ac) */

void FUN_01a9b7e0(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_38;
  
  if ((DAT_0377cd7a & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_59_0_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_CADMethodRef_TypeInfo);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_FormatterLocator_CreateFormatter__);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    thunk_FUN_00d48444(PTR_DAT_033ed318);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_System_Collections_ICollection_CopyTo__
                      );
    DAT_0377cd7a = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar1 = ZEXT816(0);
  iVar6 = *param_1;
  lVar4 = *(long *)(param_1 + 10);
  if (iVar6 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    iVar6 = -1;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    local_60 = FUN_01a9a6cc(lVar4);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_System_Collections_ICollection_CopyTo__
                + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)
                          Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_System_Collections_ICollection_CopyTo__
                        );
    }
    local_50 = FUN_01353c78(local_60,*(undefined8 *)PTR_DAT_033ed318);
    uVar3 = FUN_011cf2a4(local_50,*(undefined8 *)
                                   Method_Sirenix_Serialization_FormatterLocator_CreateFormatter__);
    auVar1 = local_60;
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      puVar2 = OVRPlugin_OVRP_1_59_0_TypeInfo;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      FUN_010bc32c(param_1 + 2,local_50,param_1,*(undefined8 *)puVar2);
      return;
    }
  }
  local_60 = auVar1;
  FUN_011cf420(local_50,&local_38,
               *(undefined8 *)System_Runtime_Remoting_Messaging_CADMethodRef_TypeInfo);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar5 = *(long *)(lVar4 + 0x18);
  if (lVar5 != 0) {
    if (*(int *)(*(long *)PTR_DAT_033f02a8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01b2f55c(lVar5,0);
  }
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x10) = 0;
  if (iVar6 < 0) {
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(int *)(local_38 + 0x14) = *(int *)(local_38 + 0x14) + -1;
  }
  *param_1 = -2;
  FUN_016a1ab0(param_1 + 2,0);
  return;
}


