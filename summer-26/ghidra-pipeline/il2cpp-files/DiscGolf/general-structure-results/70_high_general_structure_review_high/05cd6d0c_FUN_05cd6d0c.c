/*
FUNCTION_NAME: FUN_05cd6d0c
ENTRY_POINT: 05cd6d0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3
*/


void FUN_05cd6d0c(long param_1,long param_2,int param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_06dc2d10 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a19638);
    FUN_02d965b8(PTR_DAT_06a1a490);
    DAT_06dc2d10 = 1;
  }
  FUN_0552aca4(param_1,0);
  if (param_3 == 0x10) {
    if (param_4 >> 0x20 == 0) {
      lVar2 = FUN_02d966a4(*(undefined8 *)PTR_DAT_06a1a490,8);
      plVar7 = (long *)(param_1 + 0x18);
      *plVar7 = lVar2;
      LeanTween__value(plVar7,lVar2);
      lVar2 = *plVar7;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar1 = *(uint *)(lVar2 + 0x18);
      lVar6 = 0;
      do {
        if ((ulong)uVar1 * 2 - lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        *(ushort *)(lVar2 + 0x20 + lVar6) =
             *(ushort *)(param_2 + lVar6) >> 8 | *(ushort *)(param_2 + lVar6) << 8;
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0x10);
      *(undefined8 *)(param_1 + 0x20) = 0;
      LeanTween__value((undefined8 *)(param_1 + 0x20),0);
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(int *)(param_1 + 0x10) = (int)param_4;
      return;
    }
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar4 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(
                              Method_Unity_Burst_FunctionPointer<CurveUtility_ApproximateCubicBezierLength_00000444_PostfixBurstDelegate>_get_Value__
                              );
    FUN_05453f78(uVar4,uVar5,0);
  }
  else {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar4 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(
                              Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetSphereOverlapParameters_00000364_PostfixBurstDelegate>_get_Value__
                              );
    uVar3 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<string,_UriParser>_get_Count__
                              );
    FUN_0544bfcc(uVar4,uVar5,uVar3,0);
  }
  uVar5 = thunk_FUN_02dfd288(
                            Method_Unity_Burst_FunctionPointer<CurveUtility_CalculateProjectileFlightTime_00000446_PostfixBurstDelegate>_get_Value__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar5);
}


