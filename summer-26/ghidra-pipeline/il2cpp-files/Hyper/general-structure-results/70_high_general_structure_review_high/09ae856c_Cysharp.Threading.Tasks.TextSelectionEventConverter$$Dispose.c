/*
FUNCTION_NAME: Cysharp.Threading.Tasks.TextSelectionEventConverter$$Dispose
ENTRY_POINT: 09ae856c
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x09ae88cc) */
/* WARNING: Removing unreachable block (ram,0x09ae8854) */
/* WARNING: Removing unreachable block (ram,0x09ae8668) */
/* WARNING: Removing unreachable block (ram,0x09ae88e0) */
/* WARNING: Removing unreachable block (ram,0x09ae8694) */
/* WARNING: Removing unreachable block (ram,0x09ae86a0) */
/* WARNING: Removing unreachable block (ram,0x09ae88d4) */
/* WARNING: Removing unreachable block (ram,0x09ae86a8) */
/* WARNING: Removing unreachable block (ram,0x09ae86d0) */
/* WARNING: Removing unreachable block (ram,0x09ae86ec) */
/* WARNING: Removing unreachable block (ram,0x09ae86fc) */
/* WARNING: Removing unreachable block (ram,0x09ae8704) */
/* WARNING: Removing unreachable block (ram,0x09ae872c) */
/* WARNING: Removing unreachable block (ram,0x09ae8710) */
/* WARNING: Removing unreachable block (ram,0x09ae871c) */
/* WARNING: Removing unreachable block (ram,0x09ae8738) */
/* WARNING: Removing unreachable block (ram,0x09ae8968) */
/* WARNING: Removing unreachable block (ram,0x09ae898c) */
/* WARNING: Removing unreachable block (ram,0x09ae89a0) */
/* WARNING: Removing unreachable block (ram,0x09ae89a8) */
/* WARNING: Removing unreachable block (ram,0x09ae89d0) */
/* WARNING: Removing unreachable block (ram,0x09ae89b4) */
/* WARNING: Removing unreachable block (ram,0x09ae89c0) */
/* WARNING: Removing unreachable block (ram,0x09ae89dc) */
/* WARNING: Removing unreachable block (ram,0x09ae89e8) */
/* WARNING: Removing unreachable block (ram,0x09ae8748) */
/* WARNING: Removing unreachable block (ram,0x09ae88bc) */
/* WARNING: Removing unreachable block (ram,0x09ae8750) */
/* WARNING: Removing unreachable block (ram,0x09ae8760) */
/* WARNING: Removing unreachable block (ram,0x09ae8768) */
/* WARNING: Removing unreachable block (ram,0x09ae8790) */
/* WARNING: Removing unreachable block (ram,0x09ae8774) */
/* WARNING: Removing unreachable block (ram,0x09ae8780) */
/* WARNING: Removing unreachable block (ram,0x09ae87a0) */
/* WARNING: Removing unreachable block (ram,0x09ae88b8) */
/* WARNING: Removing unreachable block (ram,0x09ae87b4) */
/* WARNING: Removing unreachable block (ram,0x09ae87cc) */
/* WARNING: Removing unreachable block (ram,0x09ae88a8) */
/* WARNING: Removing unreachable block (ram,0x09ae87e0) */
/* WARNING: Removing unreachable block (ram,0x09ae8858) */
/* WARNING: Removing unreachable block (ram,0x09ae87f0) */
/* WARNING: Removing unreachable block (ram,0x09ae8834) */
/* WARNING: Removing unreachable block (ram,0x09ae8844) */
/* WARNING: Removing unreachable block (ram,0x09ae8868) */
/* WARNING: Removing unreachable block (ram,0x09ae8870) */
/* WARNING: Removing unreachable block (ram,0x09ae88b4) */

void Cysharp_Threading_Tasks_TextSelectionEventConverter__Dispose(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000018;
  long in_stack_00000020;
  char *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *in_stack_00000048;
  
code_r0x09ae856c:
  puVar3 = (undefined8 *)FUN_04980e68(unaff_x20,param_2,1);
  do {
    plVar4 = (long *)(*(code *)*puVar3)(unaff_x20,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
                    /* try { // try from 09ae859c to 09be859f has its CatchHandler @ 09ae8678 */
                    /* try { // try from 09ae85a0 to 09be85a3 has its CatchHandler @ 09ae8670 */
    lVar5 = *plVar4;
                    /* try { // try from 09ae85a4 to 09be85b7 has its CatchHandler @ 09ae8658 */
    bVar1 = *(byte *)(*unaff_x22 + 0x130);
                    /* try { // try from 09ae85b8 to 09be85f3 has its CatchHandler @ 09ae8648 */
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c();
    }
    (**(code **)(lVar5 + 0x1e8))(plVar4,*(undefined8 *)(lVar5 + 0x1f0));
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar5 = *in_stack_00000048;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_09ae8524;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(in_stack_00000048,*unaff_x21,0);
LAB_09ae8524:
    uVar6 = (*(code *)*puVar3)(in_stack_00000048,puVar3[1]);
    puVar2 = PTR_DAT_0ac09b90;
    if ((uVar6 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_04983e64(in_stack_00000048,*(undefined8 *)PTR_DAT_0ac09b90);
      *in_stack_00000018 = (long)plVar4;
      if (plVar4 == (long *)0x0) goto LAB_09ae8660;
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto Cysharp_Threading_Tasks_AsyncUnityEventHandler__CancellationCallback;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar5 = *in_stack_00000048;
    param_2 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    unaff_x20 = in_stack_00000048;
    if (uVar6 == 0) goto code_r0x09ae856c;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != param_2) {
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
      if (uVar6 == 0) goto code_r0x09ae856c;
    }
    puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_09ae8654;
    }
  }
Cysharp_Threading_Tasks_AsyncUnityEventHandler__CancellationCallback:
  puVar3 = (undefined8 *)FUN_04980e68(plVar4,*(long *)puVar2,0);
LAB_09ae8654:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_09ae8660:
  if (*in_stack_00000028 != '\0') {
    thunk_FUN_0495413c(*in_stack_00000030,0);
  }
  if (in_stack_00000020 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


