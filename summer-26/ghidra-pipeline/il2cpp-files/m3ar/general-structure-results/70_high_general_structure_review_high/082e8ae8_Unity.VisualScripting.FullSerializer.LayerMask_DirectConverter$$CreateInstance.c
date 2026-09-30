/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$CreateInstance
ENTRY_POINT: 082e8ae8
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  
  FUN_0403162c(PTR_DAT_08f8cdb8);
  *(undefined1 *)(unaff_x20 + 0xae8) = 1;
  if (*(long *)(unaff_x19 + 0x130) != 0) {
    lVar3 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f8cdb8,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x130) + 0x18));
    puVar2 = PTR_DAT_08ff6fe0;
    lVar5 = *(long *)(unaff_x19 + 0x130);
    if (lVar5 != 0) {
      uVar6 = 0;
      while ((long)uVar6 < (long)*(int *)(lVar5 + 0x18)) {
        lVar4 = FUN_057d50ec(lVar5,uVar6 & 0xffffffff,*(undefined8 *)puVar2);
        if ((lVar4 == 0) || (lVar3 == 0)) goto LAB_082e8b78;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        lVar1 = uVar6 * 4;
        lVar5 = *(long *)(unaff_x19 + 0x130);
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar3 + lVar1 + 0x20) = *(undefined4 *)(lVar4 + 0x14);
        if (lVar5 == 0) goto LAB_082e8b78;
      }
      FUN_082e8c08();
      FUN_082e8ddc();
      FUN_082e8eb0();
      FUN_082df0d4();
      if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x18) != 0) {
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
    }
  }
LAB_082e8b78:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


