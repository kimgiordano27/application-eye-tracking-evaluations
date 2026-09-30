/*
FUNCTION_NAME: FUN_0621dab4
ENTRY_POINT: 0621dab4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_3;telemetry_or_network_hits_12
*/


undefined8 FUN_0621dab4(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_38;
  
  if ((DAT_06b8b573 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767b60);
    FUN_02d6084c(PTR_DAT_0676ad78);
    FUN_02d6084c(PTR_DAT_06767b90);
    FUN_02d6084c(PTR_DAT_0676adb8);
    FUN_02d6084c(PTR_DAT_0676c460);
    FUN_02d6084c(Method_System_Net_WebRequestStream_Close_internal__);
    FUN_02d6084c(Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__);
    FUN_02d6084c(Method_System_Net_WebRequest_Abort__);
    DAT_06b8b573 = 1;
  }
  puVar3 = PTR_DAT_06767b90;
  puVar2 = PTR_DAT_06767b60;
  local_38 = 0;
  if (param_3 == (long *)0x0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar8 = thunk_FUN_02d9d534();
    uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06763338);
    FUN_04f77010(uVar8,uVar9,0);
    uVar9 = thunk_FUN_02dc61f4(Method_System_Net_WebRequestStream_TryReadFromBufferedContent__);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar8,uVar9);
  }
  lVar4 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar3);
  }
  lVar5 = FUN_04cb45c0(*(undefined8 *)puVar2);
  if (lVar4 == lVar5) {
    plVar6 = *(long **)(param_1 + 0x10);
    if ((plVar6 == (long *)0x0) ||
       (lVar4 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)), lVar4 == 0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar7 = FUN_062f98f0(lVar4,param_3[7],&local_38,0);
    uVar8 = local_38;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Net_WebRequest_Abort__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = FUN_0621ca50(uVar8);
      return uVar8;
    }
  }
  if ((param_2 == 0) || (*(char *)(param_2 + 0x10) == '\0')) {
    lVar4 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
    if (*(int *)(*(long *)PTR_DAT_0676adb8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0676adb8);
    }
    lVar5 = FUN_04cb45c0(*(undefined8 *)PTR_DAT_0676ad78);
    plVar6 = (long *)Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__;
    if (lVar4 == lVar5) {
      bVar1 = *(byte *)(*(long *)Method_System_Net_WebRequestStream_Close_internal__ + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Net_WebRequestStream_Close_internal__)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(param_3);
      }
      if (*(int *)((long)param_3 + 0x6c) == 5) {
        if (*(int *)(*(long *)Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b8b57d == '\0') {
          FUN_02d6084c(Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__);
          DAT_06b8b57d = '\x01';
        }
        goto LAB_0621dd18;
      }
      if (*(int *)((long)param_3 + 0x6c) == 6) {
        if (*(int *)(*(long *)Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b8b57c == '\0') {
          FUN_02d6084c(Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__);
          DAT_06b8b57c = '\x01';
        }
        lVar4 = *plVar6;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar4 = *plVar6;
        }
        return **(undefined8 **)(lVar4 + 0xb8);
      }
    }
  }
  plVar6 = (long *)PTR_DAT_0676c460;
  if (*(int *)(*(long *)PTR_DAT_0676c460 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b8b57b == '\0') {
    FUN_02d6084c(PTR_DAT_0676c460);
    DAT_06b8b57b = '\x01';
  }
LAB_0621dd18:
  lVar4 = *plVar6;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *plVar6;
  }
  return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
}


