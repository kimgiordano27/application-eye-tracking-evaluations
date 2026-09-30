/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,-ConduitParameterValue>$$.ctor
ENTRY_POINT: 02be721c
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


/* WARNING: Removing unreachable block (ram,0x02be7404) */

void System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_ConduitParameterValue>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong in_x9;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  do {
                    /* try { // try from 02be721c to 02ce7223 has its CatchHandler @ 02be7224 */
    if (in_x9 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02be71e8 with catch @ 02be7224
                       catch(type#2 @ 00000000) { ... } // from try @ 02be721c with catch @ 02be7224
                        */
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_3) {
          lVar1 = param_1 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02be725c;
        }
        in_x9 = in_x9 - 1;
        piVar7 = piVar7 + 4;
      } while (in_x9 != 0);
    }
    lVar1 = FUN_01ecb238();
LAB_02be725c:
    *(void **)(unaff_x29 + -0x18) = unaff_x24;
    (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    memcpy(unaff_x25,unaff_x24,unaff_x23);
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
    (*(code *)puVar3[2])(uVar2);
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar3[2])(uVar2);
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar3 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar1 + 0x70) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x21;
    }
    puVar5 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar1 + 0x78) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x22;
    }
    puVar4 = *(undefined8 **)(lVar1 + 0x80);
    uVar2 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar5;
    (*(code *)puVar4[2])(uVar2);
    lVar1 = *unaff_x26;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02be71e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02be71e4:
    uVar6 = (*(code *)*puVar3)();
    if ((uVar6 & 1) == 0) break;
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01ecaf44(param_3);
    }
    param_1 = *unaff_x26;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  if (unaff_x26 != (long *)0x0) {
    lVar1 = *unaff_x26;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02be7384;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02be7384:
    (*(code *)*puVar3)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


