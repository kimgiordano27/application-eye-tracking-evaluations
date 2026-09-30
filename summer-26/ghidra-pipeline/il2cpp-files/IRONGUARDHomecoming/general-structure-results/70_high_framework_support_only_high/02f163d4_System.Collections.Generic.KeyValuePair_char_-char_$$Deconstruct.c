/*
FUNCTION_NAME: System.Collections.Generic.KeyValuePair<char,-char>$$Deconstruct
ENTRY_POINT: 02f163d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f164d8) */

void System_Collections_Generic_KeyValuePair<char,_char>__Deconstruct(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  undefined8 unaff_x26;
  long lVar6;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    uVar1 = *(ushort *)(param_2 + 0x135);
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0xb0);
      if ((uVar1 & 1) == 0) {
        param_2 = FUN_01ecaf44();
      }
      puVar3 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x10) + 0x28)) {
        puVar3 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
      (**(code **)(lVar6 + 0x10))(unaff_x26,lVar6);
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x28) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02f162cc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02f162cc:
      uVar4 = (*(code *)*puVar3)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_02f16498;
        lVar6 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 == 0) goto LAB_02f16470;
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_02f16458;
      }
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar6) {
            lVar6 = lVar2 + (long)*piVar5 * 0x10 + 0x138;
            goto LAB_02f16350;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar6 = FUN_01ecb238();
LAB_02f16350:
      *(void **)(unaff_x29 + -0x18) = unaff_x23;
      (**(code **)(*(long *)(lVar6 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 8) + 8));
      memcpy(unaff_x25,unaff_x23,unaff_x22);
      memcpy(unaff_x24,unaff_x25,unaff_x22);
      param_2 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(param_2 + 0x135);
      lVar6 = param_2;
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_01ecaf44();
        param_2 = *(long *)(unaff_x20 + 0x20);
        uVar1 = *(ushort *)(param_2 + 0x135);
      }
      unaff_x26 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0xb0);
      param_1 = param_2;
    } while ((uVar1 & 1) != 0);
    param_1 = FUN_01ecaf44();
    param_2 = *(long *)(unaff_x20 + 0x20);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_02f16458:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02f1648c;
    }
  }
LAB_02f16470:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02f1648c:
  (*(code *)*puVar3)();
LAB_02f16498:
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


