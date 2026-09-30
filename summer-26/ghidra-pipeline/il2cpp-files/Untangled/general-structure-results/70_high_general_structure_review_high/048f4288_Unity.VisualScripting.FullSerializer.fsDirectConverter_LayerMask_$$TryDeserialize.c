/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TryDeserialize
ENTRY_POINT: 048f4288
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TryDeserialize
               (long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  long *unaff_x21;
  uint unaff_w23;
  uint unaff_w24;
  long *unaff_x25;
  
code_r0x048f4288:
  puVar2 = (undefined8 *)FUN_02eea86c(param_1,param_2,param_3);
  param_1 = unaff_x21;
  do {
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x17) * 0x10 + 0x138);
          goto LAB_048f4300;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(param_1,*unaff_x25,0x17);
LAB_048f4300:
    (*(code *)*puVar2)(param_1,iVar1 + -1,puVar2[1]);
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 == unaff_w23) {
      FUN_04cfc790();
      return;
    }
    lVar3 = *unaff_x20;
    if (lVar3 == 0) {
LAB_048f4348:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar3 = *(long *)(lVar3 + (long)(int)unaff_w24 * 8 + 0x20);
    if ((lVar3 == 0) || (param_1 = (long *)FUN_068c3600(lVar3,0), param_1 == (long *)0x0))
    goto LAB_048f4348;
    lVar3 = *param_1;
    param_2 = *unaff_x25;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 == 0) break;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto LAB_048f4280;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x16) * 0x10 + 0x138);
  } while( true );
LAB_048f4280:
  param_3 = 0x16;
  unaff_x21 = param_1;
  goto code_r0x048f4288;
}


