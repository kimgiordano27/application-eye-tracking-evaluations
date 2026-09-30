/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.Assets.Components.NetworkComponents.ColliderComponent$$RequestSetCanBeTeleportedOn
ENTRY_POINT: 0442d0c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void OVA_StellarX_Core_Framework_Presentation_Assets_Components_NetworkComponents_ColliderComponent__RequestSetCanBeTeleportedOn
               (void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  
  FUN_04077588(PTR_DAT_09286448);
  FUN_04077588(PTR_DAT_09285bb0);
  *(undefined1 *)(unaff_x21 + 0x40) = 1;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x68);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = FUN_089ca704(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)PTR_DAT_09286448 + 0xb8) + 0x30);
    if (lVar2 == 0) goto LAB_0442d16c;
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  else {
    if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_0442d16c;
    FUN_08968f70(*(long *)(unaff_x19 + 0x68),0);
  }
  if ((*(long *)(unaff_x19 + 0x38) != 0) &&
     (lVar2 = FUN_089c7604(*(long *)(unaff_x19 + 0x38),0), lVar2 != 0)) {
    FUN_089cabd0(lVar2,0,0);
    return;
  }
LAB_0442d16c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


