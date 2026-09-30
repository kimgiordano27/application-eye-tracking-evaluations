/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_is_positional_set
ENTRY_POINT: 078f8780
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_is_positional_set(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(System_Buffers_IMemoryOwner<IntPtr>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848b5c8);
    *(undefined1 *)(unaff_x23 + 0xb95) = 1;
  }
  puVar1 = PTR_DAT_0848b5c8;
  if (unaff_x21 == 0) {
LAB_078f887c:
    uVar4 = 0;
  }
  else {
    if (unaff_x19 == (long *)0x0) {
LAB_078f88cc:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* try { // try from 078f87ac to 079f87af has its CatchHandler @ 078f888c */
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 078f87c0 to 079f87c7 has its CatchHandler @ 078f8888 */
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0848b5c8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
          goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_is_positional_get;
        }
                    /* try { // try from 078f87d8 to 079f87df has its CatchHandler @ 078f889c */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
                    /* try { // try from 078f87e0 to 079f8827 has its CatchHandler @ 078f85c4 */
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4();
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_is_positional_get:
    iVar2 = (*(code *)*puVar3)();
    if (*(int *)(unaff_x21 + 0x70) < iVar2) {
      if (*(int *)(unaff_x21 + 0x70) + 1 != iVar2) goto LAB_078f887c;
      uVar6 = FUN_078f88d0();
      if ((uVar6 & 1) == 0) {
        lVar5 = *unaff_x19;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
              goto LAB_078f8894;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_078f8894:
        (*(code *)*puVar3)();
      }
      if (unaff_x20 == 0) goto LAB_078f88cc;
      FUN_0788b550();
    }
    uVar4 = 1;
  }
  return uVar4;
}


