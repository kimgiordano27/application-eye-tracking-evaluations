/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$.cctor
ENTRY_POINT: 033f8cf0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f8f30) */
/* WARNING: Removing unreachable block (ram,0x033f8d48) */
/* WARNING: Removing unreachable block (ram,0x033f8d50) */

void OVRPlugin_OVRP_1_85_0___cctor(void)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar8;
  long unaff_x21;
  long *plVar9;
  int unaff_w24;
  undefined8 uVar10;
  long *unaff_x25;
  undefined1 auVar11 [16];
  char cStack000000000000001c;
  
  if (unaff_w24 < 0) {
    plVar9 = *(long **)(unaff_x19 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads)
          {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_033f90cc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01dde8fc(plVar9,*(long *)
                                    Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                            ,0);
LAB_033f90cc:
      (*(code *)*puVar4)(plVar9,puVar4[1]);
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01e10808(unaff_x19 + 0x10,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  cStack000000000000001c = '\0';
  FUN_033f4894(uVar10,&stack0x0000001c);
  uVar6 = FUN_033f81c0();
  if ((uVar6 & 1) == 0) {
    iVar8 = 0xd;
  }
  else {
    if (*(int *)(*(long *)StringLiteral_1718 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f3e58(unaff_x19 + 8);
    iVar8 = 10;
  }
  uVar3 = 0;
  if (!bVar1 && cStack000000000000001c != '\0') {
    FUN_01dccd6c(uVar10);
  }
  if (iVar8 != 0xd) {
    if (iVar8 == 10) goto LAB_033f8ec8;
    if (iVar8 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  auVar11 = FUN_026c53b8(*(long *)(unaff_x19 + 10),0,*(undefined8 *)StringLiteral_9460);
  uVar6 = FUN_029c1214();
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar11;
    thunk_FUN_01e10808(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_01ee9390(unaff_x19 + 2);
    return;
  }
  uVar3 = FUN_029c1260();
LAB_033f8ec8:
  *unaff_x19 = 0xfffffffe;
  puVar2 = StringLiteral_9451;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0253d68c(unaff_x19 + 2,uVar3 & 1,*(undefined8 *)puVar2);
  return;
}


