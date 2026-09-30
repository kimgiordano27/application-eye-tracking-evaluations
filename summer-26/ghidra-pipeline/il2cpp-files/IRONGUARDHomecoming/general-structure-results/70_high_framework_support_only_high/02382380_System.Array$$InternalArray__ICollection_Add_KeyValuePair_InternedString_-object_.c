/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<KeyValuePair<InternedString,-object>>
ENTRY_POINT: 02382380
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023824d0) */

void System_Array__InternalArray__ICollection_Add<KeyValuePair<InternedString,_object>>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
code_r0x02382380:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_02382374;
LAB_0238238c:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_02382484;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0238241c;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0238241c:
    uVar3 = (*(code *)*puVar1)();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar3,uVar3);
    }
    (**(code **)(unaff_x22 + 0x18))
              (*(undefined8 *)(unaff_x22 + 0x40),uVar3,*(undefined8 *)(unaff_x22 + 0x28));
    param_1 = *unaff_x20;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_0238238c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02382374:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x02382380;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto 
      System_Array__InternalArray__ICollection_Add<KeyValuePair<object,_fsOption<fsVersionedType>>>;
    }
  }
LAB_02382484:
  puVar1 = (undefined8 *)FUN_01ecb238();
System_Array__InternalArray__ICollection_Add<KeyValuePair<object,_fsOption<fsVersionedType>>>:
  (*(code *)*puVar1)();
  return;
}


