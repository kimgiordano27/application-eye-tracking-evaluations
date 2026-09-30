/*
FUNCTION_NAME: FUN_05c29ea8
ENTRY_POINT: 05c29ea8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_05c29ea8(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_06dc278c & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_Add__);
    FUN_02d965b8(PTR_DAT_069fd9c0);
    FUN_02d965b8(PTR_DAT_069fd870);
    FUN_02d965b8(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_54_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_55_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_Remove__);
    FUN_02d965b8(System_LazyHelper_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_TryGetValue__);
    DAT_06dc278c = 1;
  }
  puVar2 = PTR_DAT_069fd870;
  local_50._8_8_ = 0;
  lVar11 = *(long *)(param_1 + 8);
  local_60._8_8_ = 0;
  local_50._0_8_ = 0;
  local_60._0_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_05c29fbc:
                    /* try { // try from 05c29fbc to 05d2a02f has its CatchHandler @ 05c29d90 */
    FUN_05410190(local_50,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar11 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(*(long *)(lVar11 + 0x38) + 0x2c) == '\0') {
      uVar4 = 0;
      goto LAB_05c2a23c;
    }
LAB_05c29fdc:
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 10) + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_Remove__
                              );
    FUN_058a6164(lVar7,uVar4,uVar8,0);
    plVar10 = (long *)(lVar11 + 0x30);
    *plVar10 = lVar7;
    LeanTween__value(plVar10,lVar7);
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 05c2a030 to 05d2a03f has its CatchHandler @ 05c2a040 */
    lVar7 = FUN_058a6390(*plVar10,*(undefined8 *)(lVar11 + 0x38),*(undefined8 *)(param_1 + 0xe),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* catch() { ... } // from try @ 05c29fa4 with catch @ 05c2a040
                       catch() { ... } // from try @ 05c2a030 with catch @ 05c2a040 */
                    /* try { // try from 05c2a044 to 05d2a047 has its CatchHandler @ 05c2a050 */
                    /* try { // try from 05c2a048 to 05d2a053 has its CatchHandler @ 05c29d90 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05c2a044 with catch @ 05c2a050
                        */
    local_60 = FUN_0481d044(lVar7,0,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo);
    uVar5 = FUN_04b88f80(local_60,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
    if ((uVar5 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
      LeanTween__value(param_1 + 0x16,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031df43c(param_1 + 2,local_60,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>__ctor__);
      return;
    }
LAB_05c2a074:
    uVar4 = FUN_04b88fc8(local_60,*(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined8 *)(lVar11 + 0x20) = uVar4;
    LeanTween__value();
  }
  else {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05c29e0c with catch @ 05c29f8c
                        */
    if (*param_1 == 1) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      local_50 = ZEXT816(0);
                    /* try { // try from 05c29fa4 to 05d29fbb has its CatchHandler @ 05c2a040 */
      goto LAB_05c2a074;
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = *(undefined8 *)(lVar11 + 0x28);
    uVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_LazyHelper_TypeInfo);
    FUN_05c39548(uVar4,uVar8,0,0);
    piVar9 = param_1 + 0x10;
    *(undefined8 *)piVar9 = uVar4;
    LeanTween__value(piVar9,uVar4);
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *(long *)(*(long *)(param_1 + 10) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *(long *)(lVar7 + 0x40);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_05c0c424(lVar7,0);
    puVar3 = PTR_DAT_069ff488;
    lVar7 = *(long *)PTR_DAT_069ff488;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar3;
    }
    uVar5 = thunk_FUN_0536b75c(uVar4,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20),0);
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)piVar9;
      LeanTween__value();
    }
    else if (((char)param_1[0xc] == '\0') || (*(long *)(lVar11 + 0x30) == 0)) {
      lVar7 = *(long *)(lVar11 + 0x48);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(char *)(lVar7 + 0x32) != '\0') {
        plVar10 = (long *)(lVar11 + 0x38);
        lVar6 = *plVar10;
        if (lVar6 == 0) {
          if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 10) + 0x10);
          uVar8 = *(undefined8 *)(lVar7 + 0x10);
          lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_TryGetValue__
                                    );
          FUN_05c2bf60(lVar7,uVar4,uVar8,0);
          *plVar10 = lVar7;
          LeanTween__value(plVar10,lVar7);
          lVar6 = *plVar10;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        lVar7 = FUN_05c2c01c(lVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xe),0)
        ;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        local_50 = FUN_0555c350(lVar7,0,0);
        uVar5 = FUN_05410178(local_50,0);
        if ((uVar5 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
          LeanTween__value(param_1 + 0x12,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_031e120c(param_1 + 2,local_50,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_Add__);
          return;
        }
        goto LAB_05c29fbc;
      }
      goto LAB_05c29fdc;
    }
  }
  uVar4 = 1;
LAB_05c2a23c:
  puVar3 = PTR_DAT_069fd9c0;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_03fa2848(param_1 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


