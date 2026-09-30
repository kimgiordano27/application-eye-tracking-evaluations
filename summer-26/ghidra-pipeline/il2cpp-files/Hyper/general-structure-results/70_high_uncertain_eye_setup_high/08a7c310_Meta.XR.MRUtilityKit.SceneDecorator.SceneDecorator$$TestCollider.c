/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$TestCollider
ENTRY_POINT: 08a7c310
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__TestCollider(void)

{
  double dVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long lVar9;
  long *plVar10;
  long unaff_x22;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000018;
  
  lVar3 = FUN_08a28f34();
  plVar10 = (long *)(unaff_x19 + 0xe);
  *plVar10 = lVar3;
  thunk_FUN_049ee3d8(plVar10);
  puVar2 = PTR_DAT_0ac0a830;
  lVar3 = *plVar10;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  fVar11 = *(float *)(unaff_x22 + 0x178);
  fVar12 = *(float *)(lVar3 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *plVar10;
  }
  dVar1 = DAT_01da4fb8;
  if ((double)ABS(fVar11 - fVar12) < DAT_01da4fb8) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    fVar11 = *(float *)(unaff_x22 + 0x17c);
    fVar12 = *(float *)(lVar3 + 0x24);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((double)ABS(fVar11 - fVar12) < dVar1) goto LAB_08a7c5c4;
    lVar3 = *plVar10;
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  fVar11 = (float)*(undefined8 *)(lVar3 + 0x20) * 100.0;
  fVar12 = (float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20) * 100.0;
  lVar9 = *(long *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)PTR_DAT_0ac546f0;
  uVar5 = CONCAT44((int)fVar12,(int)fVar11);
  *(ulong *)(unaff_x19 + 0x10) =
       uVar5 ^ (uVar5 ^ 0x8000000080000000) &
               CONCAT44(-(uint)(fVar12 == INFINITY),-(uint)(fVar11 == INFINITY));
  lVar3 = thunk_FUN_04983f60(uVar4);
  Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GenerateDebugAnchor(lVar3,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = FUN_08a40124(lVar9,lVar3,*(undefined8 *)(unaff_x19 + 0xc),0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_stack_00000018 = FUN_07764808(lVar3,*(undefined8 *)PTR_DAT_0ac54570);
  uVar5 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac54568);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
    thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
    FUN_05a6f524(unaff_x19 + 2,&stack0x00000018);
    return;
  }
  FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac54560);
  puVar2 = PTR_DAT_0ac46eb8;
  if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *(long *)PTR_DAT_0ac46eb8;
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(*(long *)(unaff_x19 + 0xe) + 0x20);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_0ac09758;
  in_stack_00000000._4_4_ = unaff_x19[0x10];
  plVar10 = (long *)**(undefined8 **)(lVar3 + 0xb8);
  uVar4 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),(long)&stack0x00000000 + 4);
  uVar6 = thunk_FUN_04983b98(*(undefined8 *)(puVar2 + 0x48));
  uVar4 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac546f8,uVar4,uVar6,0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *plVar10;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_08a7c5b4;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a7c5b4:
  (*(code *)*puVar7)(plVar10,uVar4,puVar7[1]);
LAB_08a7c5c4:
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  *unaff_x19 = 0xfffffffe;
  thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
  FUN_08c7f6c8(unaff_x19 + 2,0);
  return;
}


