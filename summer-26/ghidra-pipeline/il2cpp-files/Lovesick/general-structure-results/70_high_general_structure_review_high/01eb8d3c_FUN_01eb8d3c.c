/*
FUNCTION_NAME: FUN_01eb8d3c
ENTRY_POINT: 01eb8d3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


long * FUN_01eb8d3c(long param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((DAT_0377ff48 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                      );
    DAT_0377ff48 = 1;
  }
  plVar2 = (long *)thunk_FUN_00d62050(param_1,0);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)StringLiteral_13941 + 300);
    if ((*(byte *)(*plVar2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_13941)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar2);
    }
  }
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (lVar3 = FUN_01f76728(*(long *)(param_1 + 0xa0),0), plVar2 != (long *)0x0)) {
    plVar2[0x14] = lVar3;
    if (*(long *)(param_1 + 0xa8) != 0) {
      lVar3 = FUN_01f76728(*(long *)(param_1 + 0xa8),0);
      plVar2[0x15] = lVar3;
      if (*(long *)(param_1 + 0xb0) != 0) {
        lVar3 = FUN_01f76728(*(long *)(param_1 + 0xb0),0);
        plVar2[0x16] = lVar3;
        if (*(long *)(param_1 + 0xc0) != 0) {
          lVar3 = FUN_01f76728(*(long *)(param_1 + 0xc0),0);
          plVar2[0x18] = lVar3;
          plVar5 = *(long **)(param_1 + 0xb8);
          if (plVar5 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 300);
            if ((bVar1 <= *(byte *)(*plVar5 + 300)) &&
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
              lVar3 = FUN_01eca598(plVar5,0);
              if (lVar3 == 0) goto LAB_01eb8efc;
              uVar4 = FUN_01f7609c(lVar3,0);
              if ((uVar4 & 1) != 0) {
                plVar5 = (long *)FUN_01eb86d0(plVar5,param_2);
                if (plVar5 != (long *)0x0) {
                  lVar3 = *(long *)
                           Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                  ;
                  bVar1 = *(byte *)(lVar3 + 300);
                  if ((bVar1 <= *(byte *)(*plVar5 + 300)) &&
                     (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) {
                    plVar2[0x17] = (long)plVar5;
                    if ((bVar1 <= *(byte *)(*plVar5 + 300)) &&
                       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3))
                    goto LAB_01eb8ee8;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c();
                }
                plVar2[0x17] = 0;
              }
            }
          }
LAB_01eb8ee8:
          plVar2[0x1b] = 0;
          return plVar2;
        }
      }
    }
  }
LAB_01eb8efc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


