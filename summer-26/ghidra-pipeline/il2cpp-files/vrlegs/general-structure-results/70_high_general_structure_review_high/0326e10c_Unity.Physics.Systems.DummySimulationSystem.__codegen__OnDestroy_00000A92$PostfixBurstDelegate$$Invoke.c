/*
FUNCTION_NAME: Unity.Physics.Systems.DummySimulationSystem.__codegen__OnDestroy_00000A92$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0326e10c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


int Unity_Physics_Systems_DummySimulationSystem___codegen__OnDestroy_00000A92_PostfixBurstDelegate__Invoke
              (void)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long unaff_x19;
  int unaff_w20;
  int iVar4;
  long unaff_x21;
  long *unaff_x22;
  int iStack0000000000000010;
  int iStack0000000000000014;
  undefined4 in_stack_00000018;
  
                    /* try { // try from 0326e10c to 0336e117 has its CatchHandler @ 0326dc40 */
  FUN_01ab69ac(Unity_Services_Analytics_Internal_BufferX_TypeInfo);
                    /* try { // try from 0326e118 to 0336e11f has its CatchHandler @ 0326e120 */
  FUN_01ab69ac(UniGLTF_BufferAccessor_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cc1790);
  FUN_01ab69ac(PTR_DAT_03cc1798);
  *(undefined1 *)(unaff_x21 + 0x8be) = 1;
  lVar2 = *(long *)(*unaff_x22 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  pcVar3 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar3 == '\0') {
    iVar1 = 1;
  }
  else {
    FUN_022412e0(&stack0x00000008,&stack0x00000010,*(undefined8 *)PTR_DAT_03cc1798);
    iVar1 = iStack0000000000000010;
  }
  if (unaff_x19 != 0) {
    if (0 < *(int *)(unaff_x19 + 0x18)) {
      iVar4 = 0;
      do {
        FUN_02215a88();
        if (iVar1 == iStack0000000000000010) {
          FUN_02215a88();
          if (iStack0000000000000014 == unaff_w20) {
            return iVar4;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(unaff_x19 + 0x18));
    }
    _iStack0000000000000010 = CONCAT44(unaff_w20,iVar1);
    in_stack_00000018 = 0;
    FUN_01b5f01c();
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


