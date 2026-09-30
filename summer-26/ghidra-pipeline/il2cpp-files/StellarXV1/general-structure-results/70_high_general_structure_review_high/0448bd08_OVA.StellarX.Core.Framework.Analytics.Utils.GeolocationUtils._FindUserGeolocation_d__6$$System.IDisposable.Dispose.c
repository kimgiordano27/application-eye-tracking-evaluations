/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Analytics.Utils.GeolocationUtils.<FindUserGeolocation>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 0448bd08
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void OVA_StellarX_Core_Framework_Analytics_Utils_GeolocationUtils_<FindUserGeolocation>d__6__System_IDisposable_Dispose
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long lVar5;
  long *plVar6;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_04f38fe8(param_2,param_3,**(undefined8 **)(param_1 + 0xda8));
  if ((uVar1 & 1) == 0) {
    FUN_044a0718();
    return;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0xc0) = in_stack_00000008;
    thunk_FUN_040ec700();
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if ((lVar5 != 0) && (plVar6 = *(long **)(lVar5 + 0xc0), plVar6 != (long *)0x0)) {
      lVar3 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09289748) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0448bd9c;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_09289748,0);
LAB_0448bd9c:
      (*(code *)*puVar2)(plVar6,lVar5,puVar2[1]);
      FUN_044a0578();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


