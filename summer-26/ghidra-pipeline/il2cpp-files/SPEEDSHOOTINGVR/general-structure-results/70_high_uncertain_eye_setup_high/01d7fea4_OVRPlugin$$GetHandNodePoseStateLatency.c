/*
FUNCTION_NAME: OVRPlugin$$GetHandNodePoseStateLatency
ENTRY_POINT: 01d7fea4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandNodePoseStateLatency
               (undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack000000000000002c;
  char in_stack_00000030;
  char cStack0000000000000034;
  long lStack0000000000000038;
  
  puVar1 = PTR_DAT_0234bce0;
                    /* try { // try from 01d7fec8 to 01e7ff27 has its CatchHandler @ 01d7fec8
                       catch() { ... } // from try @ 01d7fec8 with catch @ 01d7fec8
                       catch() { ... } // from try @ 01d800b8 with catch @ 01d7fec8
                       catch() { ... } // from try @ 01d8014c with catch @ 01d7fec8
                       catch() { ... } // from try @ 01d801c0 with catch @ 01d7fec8 */
  lStack0000000000000038 = param_3;
  if ((DAT_0247d7d8 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234da10);
    FUN_00fdc2e4(PTR_DAT_02359068);
    FUN_00fdc2e4(PTR_DAT_02359070);
    FUN_00fdc2e4(PTR_DAT_0234bce0);
    DAT_0247d7d8 = 1;
  }
  cStack0000000000000034 = '\0';
  in_stack_00000030 = '\0';
  uStack000000000000002c = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
                    /* try { // try from 01d7ff28 to 01e7ff37 has its CatchHandler @ 01d80168 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  puVar3 = PTR_DAT_02359070;
  FUN_01d7f060(param_4,&stack0x00000038,param_7 & 1,&stack0x00000034,&stack0x00000030,
               &stack0x0000002c);
  cVar5 = cStack0000000000000034;
  if (((cStack0000000000000034 == '\0') && (lStack0000000000000038 != 0)) &&
     (*(int *)(lStack0000000000000038 + 0x10) == 0)) {
LAB_01d7ffe0:
    uVar9 = *(undefined8 *)puVar3;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_0174876c(param_1,0,uVar9);
  }
  else {
    uVar6 = FUN_01c42558(lStack0000000000000038,0);
    lVar8 = lStack0000000000000038;
    puVar2 = PTR_DAT_0234da10;
    if ((uVar6 & 1) == 0) {
      lVar7 = *(long *)PTR_DAT_0234da10;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar7 = *(long *)puVar2;
      }
      uVar6 = FUN_01c458dc(lVar8,**(undefined8 **)(lVar7 + 0xb8),0);
      lVar8 = lStack0000000000000038;
      if ((uVar6 & 1) != 0) {
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar7 = *(long *)puVar2;
        }
        uVar6 = FUN_01c458dc(lVar8,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
        if ((uVar6 & 1) != 0) goto LAB_01d7ffe0;
      }
    }
    lVar8 = FUN_01d8010c(param_2,param_4,param_2);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_0174876c(&stack0x00000010,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)puVar3);
    cVar4 = in_stack_00000030;
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar6 = 0;
      uVar10 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        uVar9 = *(undefined8 *)(lVar8 + 0x20 + uVar6 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar10 = FUN_01d7f868(uVar9,param_4,param_5,param_6);
        lVar7 = lStack0000000000000038;
        if ((uVar10 & 1) != 0) {
          if (cVar5 != '\0') {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar10 = FUN_01d7f224(uVar9,lVar7,cVar4 != '\0');
            if ((uVar10 & 1) == 0) goto LAB_01d800c0;
          }
          FUN_0174899c(&stack0x00000010,uVar9,*(undefined8 *)PTR_DAT_02359068);
        }
LAB_01d800c0:
        uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    param_1[2] = in_stack_00000020;
    param_1[1] = in_stack_00000018;
    *param_1 = in_stack_00000010;
  }
  return;
}


