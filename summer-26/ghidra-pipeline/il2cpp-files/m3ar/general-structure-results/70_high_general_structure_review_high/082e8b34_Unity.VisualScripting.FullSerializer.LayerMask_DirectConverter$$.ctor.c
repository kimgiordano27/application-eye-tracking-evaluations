/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$.ctor
ENTRY_POINT: 082e8b34
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter___ctor(long param_1)

{
  long lVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  
  while ((long)unaff_x21 < in_x9) {
    lVar2 = FUN_057d50ec(param_1,unaff_x21 & 0xffffffff,*unaff_x22);
    if ((lVar2 == 0) || (unaff_x20 == 0)) goto LAB_082e8b78;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar1 = unaff_x21 * 4;
    param_1 = *(long *)(unaff_x19 + 0x130);
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(unaff_x20 + lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x14);
    if (param_1 == 0) goto LAB_082e8b78;
    in_x9 = (long)*(int *)(param_1 + 0x18);
  }
  FUN_082e8c08();
  FUN_082e8ddc();
  FUN_082e8eb0();
  FUN_082df0d4();
  if (unaff_x20 != 0) {
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      if (*(char *)(unaff_x19 + 0x155) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_08321fb8(0);
      }
      FUN_082e4b98();
    }
    return;
  }
LAB_082e8b78:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


