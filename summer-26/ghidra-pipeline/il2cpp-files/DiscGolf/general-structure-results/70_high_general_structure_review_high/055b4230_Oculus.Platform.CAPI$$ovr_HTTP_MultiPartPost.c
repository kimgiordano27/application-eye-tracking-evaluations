/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_HTTP_MultiPartPost
ENTRY_POINT: 055b4230
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3
*/


void Oculus_Platform_CAPI__ovr_HTTP_MultiPartPost(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int in_w9;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x27;
  int iStack000000000000000c;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000050;
  char cStack0000000000000058;
  
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,in_w9);
  iStack000000000000000c = in_w9;
  thunk_FUN_02dd2d7c(*(undefined8 *)(param_1 + 0x48));
  (**(code **)(*unaff_x19 + 0x1c8))();
  thunk_FUN_02dfd288(UnityEngine_UIElements_PanelRaycaster_var);
  thunk_FUN_02dd3048();
  uVar5 = FUN_055ac320();
  if ((uVar5 & 1) == 0) {
    in_stack_00000050 = in_stack_00000020;
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(unaff_x23);
  }
                    /* try { // try from 055b4294 to 056b4297 has its CatchHandler @ 055b42ac */
                    /* catch() { ... } // from try @ 055b4140 with catch @ 055b4298
                       try { // try from 055b4298 to 056b42d7 has its CatchHandler @ 055b3ffc */
                    /* catch() { ... } // from try @ 055b4124 with catch @ 055b429c */
                    /* catch() { ... } // from try @ 055b41a0 with catch @ 055b42a0 */
                    /* catch() { ... } // from try @ 055b4100 with catch @ 055b42a4 */
  FUN_055af384();
                    /* catch() { ... } // from try @ 055b40e8 with catch @ 055b42a8 */
                    /* catch() { ... } // from try @ 055b4294 with catch @ 055b42ac */
                    /* catch() { ... } // from try @ 055b41fc with catch @ 055b42b0 */
  thunk_FUN_02dfd288(PTR_DAT_06a0d270);
  uVar5 = _cStack0000000000000058;
                    /* catch() { ... } // from try @ 055b41e0 with catch @ 055b42b4 */
                    /* catch() { ... } // from try @ 055b417c with catch @ 055b42b8 */
  if (cStack0000000000000058 != '\0') {
    thunk_FUN_02dfd288(PTR_DAT_06a0d268);
                    /* try { // try from 055b42d8 to 056b42db has its CatchHandler @ 055b42e8 */
    thunk_FUN_02dfd288(PTR_DAT_06a0d270);
                    /* catch() { ... } // from try @ 055b42d8 with catch @ 055b42e8 */
    if (((uVar5 & 0xff) != 0) && (iStack000000000000000c == (int)(uVar5 >> 0x20))) {
      thunk_FUN_02dfd288(System_Action<InputAction_CallbackContext>_TypeInfo);
      uVar6 = FUN_0557511c();
      in_stack_00000050 = in_stack_00000020;
LAB_055b43e0:
      uVar7 = thunk_FUN_02dfd288(
                                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_TokenData>>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar7);
    }
  }
                    /* try { // try from 055b42f0 to 056b42f7 has its CatchHandler @ 055b4384 */
                    /* try { // try from 055b42f8 to 056b4317 has its CatchHandler @ 055b3ffc */
  uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a0b210);
                    /* catch() { ... } // from try @ 055b4210 with catch @ 055b42fc */
  FUN_0432fe24(&stack0x00000058,iStack000000000000000c,uVar6);
  in_stack_00000050 = in_stack_00000020;
  do {
    while( true ) {
      (**(code **)(*unaff_x19 + 0x1b8))();
      if (*(int *)(unaff_x27 + 0x18) == unaff_w24) break;
      uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar5 & 1) == 0) goto LAB_055b4318;
      iVar1 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar1 != 5) {
        if (iVar1 == 0xe) {
          FUN_047ce9d8();
          if (*(int *)(unaff_x27 + 0x18) < 1) goto LAB_055b4338;
          unaff_x20 = (long *)FUN_047ce994();
        }
        else {
          if (iVar1 != 2) {
            FUN_02979e58();
            uVar2 = (**(code **)(*unaff_x19 + 0x188))();
            in_stack_00000030 = thunk_FUN_02dfd288(System_Drawing_Point_var);
            in_stack_00000038 = 0xffffffffffffffff;
            in_stack_00000040 = uVar2;
            uVar6 = FUN_0551e574(&stack0x00000030,0);
            uVar7 = thunk_FUN_02dfd288(
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_SubscribeRequest>>_TypeInfo
                                      );
            FUN_05362cb4(uVar7,uVar6,0);
            uVar6 = FUN_05574a94();
            goto LAB_055b43e0;
          }
          plVar3 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0aba0);
          FUN_0400f984(plVar3,*(undefined8 *)PTR_DAT_06a0ab88);
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar8 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069ff858) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_055b4160;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_02dd004c(unaff_x20,*(long *)PTR_DAT_069ff858,2);
LAB_055b4160:
          (*(code *)*puVar4)(unaff_x20,plVar3,puVar4[1]);
          FUN_047cead4();
          unaff_x20 = plVar3;
        }
      }
    }
    uVar5 = FUN_05574ae8();
    if ((uVar5 & 1) == 0) {
LAB_055b4318:
                    /* try { // try from 055b4318 to 056b432f has its CatchHandler @ 055b4374 */
                    /* try { // try from 055b4330 to 056b4363 has its CatchHandler @ 055b3ffc */
      FUN_055b578c();
LAB_055b4338:
      FUN_055b5560();
      return;
    }
    iVar1 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar1 != 5) {
      if (iVar1 == 0xe) {
        FUN_047ce9d8();
        unaff_x20 = (long *)FUN_047ce994();
        _cStack0000000000000058 = 0;
      }
      else {
        if (unaff_x26 == (long *)0x0) {
LAB_055b407c:
          uVar6 = FUN_055aeed0();
        }
        else {
          uVar5 = (**(code **)(*unaff_x26 + 0x1a8))();
          if ((uVar5 & 1) == 0) goto LAB_055b407c;
          uVar6 = FUN_055aeab8();
        }
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069ff858) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_055b4100;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_02dd004c(unaff_x20,*(long *)PTR_DAT_069ff858,2);
LAB_055b4100:
        (*(code *)*puVar4)(unaff_x20,uVar6,puVar4[1]);
      }
    }
  } while( true );
}


