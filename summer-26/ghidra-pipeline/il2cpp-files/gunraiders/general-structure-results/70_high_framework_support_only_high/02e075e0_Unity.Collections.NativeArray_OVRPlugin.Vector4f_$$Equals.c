/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Equals
ENTRY_POINT: 02e075e0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e07720) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Equals
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong in_x9;
  long in_x10;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar6 [16];
  
  do {
    piVar5 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02e07618;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01c72498();
LAB_02e07618:
      auVar6 = (*(code *)*puVar1)();
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar3 = *(uint *)(unaff_x21 + 0x18);
      if (uVar3 == *(uint *)(lVar2 + 0x18)) {
        FUN_02e05eb4();
        uVar3 = *(uint *)(unaff_x21 + 0x18);
        lVar2 = *(long *)(unaff_x21 + 0x10);
        *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
      }
      else {
        *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      *(undefined1 (*) [16])(lVar2 + (long)(int)uVar3 * 0x10 + 0x20) = auVar6;
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02e075a0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01c72498();
LAB_02e075a0:
      uVar4 = (*(code *)*puVar1)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar2 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 == 0) goto LAB_02e076cc;
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_02e076b4;
      }
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_01c72394(param_3);
      }
      param_1 = *unaff_x19;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_02e076b4:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02e076e8;
    }
  }
LAB_02e076cc:
  puVar1 = (undefined8 *)FUN_01c72498();
LAB_02e076e8:
  (*(code *)*puVar1)();
  return;
}


