/*
FUNCTION_NAME: OVRManager$$DeregisterEventListener
ENTRY_POINT: 033ab9c4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__DeregisterEventListener(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_1671);
  FUN_01d7d918(Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap);
  FUN_01d7d918(StringLiteral_1554);
  *(undefined1 *)(unaff_x21 + 0x8b4) = 1;
  if (unaff_x20 == (long *)0x0) {
    thunk_FUN_01dd295c(StringLiteral_6081);
    uVar6 = thunk_FUN_01de27b8();
    uVar7 = thunk_FUN_01dd295c(StringLiteral_8487);
    FUN_03308044(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01dd295c(StringLiteral_8488);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar6,uVar7);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
                    /* try { // try from 033aba00 to 034aba0f has its CatchHandler @ 033abeb0 */
  iVar3 = (**(code **)(*unaff_x19 + 0x198))();
  if (iVar3 != 8) {
                    /* try { // try from 033aba14 to 034aba1b has its CatchHandler @ 033abbdc */
    if (iVar3 == 4) {
      if (*(long *)(*unaff_x20 + 0x40) !=
          *(long *)(*(long *)
                     Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
                   + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c();
      }
      puVar5 = (uint *)thunk_FUN_01de290c();
      lVar8 = *unaff_x19;
      bVar2 = *(byte *)(*(long *)StringLiteral_1671 + 0x130);
      if ((bVar2 <= *(byte *)(lVar8 + 0x130)) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)StringLiteral_1671))
      {
        uVar1 = *puVar5;
        uVar4 = (**(code **)(lVar8 + 0x228))();
        if (((uVar1 & 7) != 0) && ((uVar4 & 7) != (uVar1 & 7))) {
          return 0;
        }
        if (((uVar1 >> 4 & 1) != 0) && ((uVar4 >> 4 & 1) == 0)) {
          return 0;
        }
        if (((uVar1 >> 5 & 1) != 0) && ((uVar4 >> 5 & 1) == 0)) {
          return 0;
        }
        if (((uVar1 >> 6 & 1) != 0) && ((uVar4 >> 6 & 1) == 0)) {
          return 0;
        }
        if (((uVar1 >> 7 & 1) != 0) && ((uVar4 >> 7 & 1) == 0)) {
          return 0;
        }
        return (uint)((uVar1 & 0x2000) == 0) | (uVar4 & 0x2000) >> 0xd;
      }
      goto LAB_033abbc8;
    }
    if (iVar3 != 1) {
      return 0;
    }
  }
  if (*(long *)(*unaff_x20 + 0x40) !=
      *(long *)(*(long *)
                 Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
               + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7df0c();
  }
  puVar5 = (uint *)thunk_FUN_01de290c();
  uVar1 = *puVar5;
  iVar3 = (**(code **)(*unaff_x19 + 0x198))();
  plVar9 = (long *)StringLiteral_2471;
  if (iVar3 == 8) {
    plVar9 = (long *)StringLiteral_1554;
  }
  lVar8 = *unaff_x19;
  bVar2 = *(byte *)(*plVar9 + 0x130);
  if ((bVar2 <= *(byte *)(lVar8 + 0x130)) &&
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *plVar9)) {
    uVar4 = (**(code **)(lVar8 + 0x238))();
    if ((((((uVar1 & 7) == 0) || ((uVar4 & 7) == (uVar1 & 7))) &&
         (((uVar1 >> 4 & 1) == 0 || ((uVar4 >> 4 & 1) != 0)))) &&
        (((uVar1 >> 5 & 1) == 0 || ((uVar4 >> 5 & 1) != 0)))) &&
       ((((uVar1 >> 6 & 1) == 0 || ((uVar4 >> 6 & 1) != 0)) &&
        (((uVar1 >> 10 & 1) == 0 || ((uVar4 >> 10 & 1) != 0)))))) {
      return (uint)((uVar1 & 0x800) == 0) | (uVar4 & 0x800) >> 0xb;
    }
    return 0;
  }
LAB_033abbc8:
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c();
}


