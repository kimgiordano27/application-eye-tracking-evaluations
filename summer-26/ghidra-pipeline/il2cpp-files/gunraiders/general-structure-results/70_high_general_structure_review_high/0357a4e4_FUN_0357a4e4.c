/*
FUNCTION_NAME: FUN_0357a4e4
ENTRY_POINT: 0357a4e4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void FUN_0357a4e4(long param_1)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_045379b4 & 1) == 0) {
    FUN_01c5d288(Method_System_Nullable<Vector4>__ctor__);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(Method_Oculus_Platform_Request<LeaderboardEntryList>__ctor__);
    FUN_01c5d288(PTR_DAT_04237a90);
    FUN_01c5d288(Method_Oculus_Platform_Request<LeaderboardList>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<LinkedAccountList>__ctor__);
    DAT_045379b4 = 1;
  }
  puVar2 = PTR_DAT_04237a90;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10) == -0x1e) {
      if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar3 = FUN_0356741c();
      if (iVar3 == 1) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03564bb0();
        return;
      }
    }
    else if (*(char *)(param_1 + 0x10) == -0x24) {
      sVar1 = *(short *)(param_1 + 0x12);
      lVar4 = *(long *)PTR_DAT_04237a90;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar4 = *(long *)puVar2;
      }
      if (sVar1 == 0) {
        if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x20) == 3) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar5 = FUN_0356759c();
                    /* try { // try from 0357a650 to 0367a6ff has its CatchHandler @ 0357a650
                       catch() { ... } // from try @ 0357a650 with catch @ 0357a650
                       catch() { ... } // from try @ 0357a890 with catch @ 0357a650
                       catch() { ... } // from try @ 0357a8e0 with catch @ 0357a650
                       catch() { ... } // from try @ 0357a928 with catch @ 0357a650
                       catch() { ... } // from try @ 0357a958 with catch @ 0357a650 */
          lVar4 = *(long *)puVar2;
          if (0 < *(int *)(*(long *)(lVar4 + 0xb8) + 0x24)) {
            uVar6 = FUN_03146988(*(undefined8 *)
                                  Method_Oculus_Platform_Request<LeaderboardList>__ctor__,uVar5,0);
            if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
            }
            FUN_03d03d14(uVar6,0);
            lVar4 = *(long *)puVar2;
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar4);
            lVar4 = *(long *)puVar2;
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar4 + 0x150);
            uVar6 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Nullable<Vector4>__ctor__);
            FUN_0285da04(uVar6,0,*(undefined8 *)
                                  Method_Oculus_Platform_Request<LeaderboardEntryList>__ctor__,0);
            if (lVar4 != 0) {
              FUN_035526ac(lVar4,uVar6,uVar5,0);
              return;
            }
          }
          goto LAB_0357a72c;
        }
      }
      else if (1 < *(int *)(*(long *)(lVar4 + 0xb8) + 0x24)) {
        uVar5 = FUN_032cd624((short *)(param_1 + 0x12),0);
        uVar5 = FUN_03146988(*(undefined8 *)
                              Method_Oculus_Platform_Request<LinkedAccountList>__ctor__,uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
        }
        FUN_03d03d14(uVar5,0);
        return;
      }
    }
    return;
  }
LAB_0357a72c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


