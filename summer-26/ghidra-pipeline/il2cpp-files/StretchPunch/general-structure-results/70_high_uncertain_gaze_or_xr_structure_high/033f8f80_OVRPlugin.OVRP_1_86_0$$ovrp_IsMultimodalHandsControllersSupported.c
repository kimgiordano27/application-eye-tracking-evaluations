/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_IsMultimodalHandsControllersSupported
ENTRY_POINT: 033f8f80
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033f8f30) */
/* WARNING: Removing unreachable block (ram,0x033f915c) */

void OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported
               (undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar11;
  int unaff_w24;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x25;
  undefined1 auVar14 [16];
  char cStack000000000000001c;
  
  if (param_2 != 1) {
    if ((unaff_w24 < 0) && (plVar4 = *(long **)(unaff_x19 + 0x10), plVar4 != (long *)0x0)) {
      lVar13 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads)
          {
            puVar5 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x033f914c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01dde8fc(plVar4,*(long *)
                                    Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                            ,0);
code_r0x033f914c:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01e7f0d0(param_1);
    }
    puVar5 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar12 = thunk_FUN_01dd295c(StringLiteral_464);
    uVar9 = thunk_FUN_01dce4e8(uVar12,*(undefined8 *)*puVar5);
    if ((uVar9 & 1) != 0) {
      uVar12 = *puVar5;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      lVar13 = thunk_FUN_01dd295c(StringLiteral_9435);
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar6 = thunk_FUN_01dd295c(StringLiteral_9461);
      FUN_0253d8bc(unaff_x19 + 2,uVar12,uVar6);
      return;
    }
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&
                       PTR_Method_SojaExiles_opencloseWindow1_<opening>d__5_System_Collections_IEnumerator_Reset___03fad958
                ,0);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar13 = *plVar4;
  __cxa_end_catch();
  if (unaff_w24 < 0) {
    plVar4 = *(long **)(unaff_x19 + 0x10);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads)
          {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_033f90cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01dde8fc(plVar4,*(long *)
                                    Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                            ,0);
LAB_033f90cc:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68(lVar13);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01e10808(unaff_x19 + 0x10,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  cStack000000000000001c = '\0';
  FUN_033f4894(uVar12,&stack0x0000001c);
  uVar9 = FUN_033f81c0();
  if ((uVar9 & 1) == 0) {
    iVar11 = 0xd;
  }
  else {
    if (*(int *)(*(long *)StringLiteral_1718 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f3e58(unaff_x19 + 8);
    iVar11 = 10;
  }
  uVar3 = 0;
  if (!bVar1 && cStack000000000000001c != '\0') {
    FUN_01dccd6c(uVar12);
  }
  if (iVar11 != 0xd) {
    if (iVar11 == 10) goto LAB_033f8ec8;
    if (iVar11 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  auVar14 = FUN_026c53b8(*(long *)(unaff_x19 + 10),0,*(undefined8 *)StringLiteral_9460);
  uVar9 = FUN_029c1214();
  if ((uVar9 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar14;
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


