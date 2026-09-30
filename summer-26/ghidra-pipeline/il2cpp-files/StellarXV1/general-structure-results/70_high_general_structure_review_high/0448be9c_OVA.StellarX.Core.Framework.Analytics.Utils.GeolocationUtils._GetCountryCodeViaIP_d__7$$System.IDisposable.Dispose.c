/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Analytics.Utils.GeolocationUtils.<GetCountryCodeViaIP>d__7$$System.IDisposable.Dispose
ENTRY_POINT: 0448be9c
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


void OVA_StellarX_Core_Framework_Analytics_Utils_GeolocationUtils_<GetCountryCodeViaIP>d__7__System_IDisposable_Dispose
               (undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long *plVar6;
  
  FUN_0449f5f8();
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 200) = param_1;
    thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 200),param_1);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if ((lVar5 != 0) && (plVar6 = *(long **)(lVar5 + 200), plVar6 != (long *)0x0)) {
      lVar2 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_092999b0) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0448bf1c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092999b0,0);
LAB_0448bf1c:
      (*(code *)*puVar1)(plVar6,lVar5,puVar1[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


