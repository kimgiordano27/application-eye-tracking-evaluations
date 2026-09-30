/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetEyeTextureScale
ENTRY_POINT: 05165120
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_1_0__ovrp_SetEyeTextureScale(ulong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int iVar7;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *in_stack_00000030;
  
  do {
    if ((param_1 & 1) != 0) {
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_05165174;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 051650e8 with catch @ 05165158
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 051650ec with catch @ 0516515c
                        */
      puVar2 = (undefined8 *)FUN_02d9a5d4(unaff_x19,*unaff_x21,8);
LAB_05165174:
                    /* try { // try from 05165174 to 0526518b has its CatchHandler @ 05165204 */
      uVar3 = (*(code *)*puVar2)(unaff_x19,puVar2[1]);
      uVar5 = thunk_FUN_04e8bd3c(uVar3,*unaff_x24,0);
                    /* try { // try from 0516518c to 052651f3 has its CatchHandler @ 051650a0 */
      if ((uVar5 & 1) != 0) {
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_051651c0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        break;
      }
    }
    uVar5 = FUN_04a7a4a0(&stack0x00000020,*unaff_x22);
    unaff_x19 = in_stack_00000030;
    if ((uVar5 & 1) == 0) {
      bVar1 = 0;
      iVar7 = 5;
      goto LAB_05165228;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *in_stack_00000030;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_05165108;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x21,1);
LAB_05165108:
    uVar3 = (*(code *)*puVar2)(unaff_x19,puVar2[1]);
    param_1 = thunk_FUN_04e8bd3c(uVar3,*unaff_x23,0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x21) {
      puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
      goto LAB_051651ec;
    }
  }
LAB_051651c0:
  puVar2 = (undefined8 *)FUN_02d9a5d4(unaff_x19,*unaff_x21,5);
LAB_051651ec:
  uVar3 = (*(code *)*puVar2)(unaff_x19,puVar2[1]);
  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  bVar1 = FUN_056705b0(uVar3,0);
  iVar7 = 4;
LAB_05165228:
  FUN_04a7a49c(&stack0x00000020,*unaff_x20);
  return bVar1 & iVar7 == 4;
}


