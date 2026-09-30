/*
FUNCTION_NAME: Sirenix.OdinInspector.IncludeMyAttributesAttribute$$.ctor
ENTRY_POINT: 037d5090
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x037d51b4) */

void Sirenix_OdinInspector_IncludeMyAttributesAttribute___ctor
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x28;
  
  do {
    uVar2 = thunk_FUN_0340e318(param_1,param_2,0);
    param_1 = unaff_x21;
    if ((uVar2 & 1) == 0) goto LAB_037d50b0;
    do {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02ee8df4();
LAB_037d50b0:
      uVar2 = thunk_FUN_0340e318(param_1,*unaff_x28,0);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = thunk_FUN_0340e318(param_1,*(undefined8 *)StringLiteral_1220,0), (uVar2 & 1) == 0)
         ) {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      else {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02ee8df4();
      }
      FUN_02ee8df4();
      lVar3 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_037d5000;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_037d5000:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_037d5150;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_037d5138;
      }
      lVar3 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_037d505c;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_037d505c:
      lVar3 = (*(code *)*puVar1)();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      param_1 = FUN_034128bc(lVar3,0);
      uVar2 = thunk_FUN_0340e318(param_1,*unaff_x25,0);
    } while ((uVar2 & 1) != 0);
    param_2 = *unaff_x22;
    unaff_x21 = param_1;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_037d5138:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_037d516c;
    }
  }
LAB_037d5150:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_037d516c:
  (*(code *)*puVar1)();
  return;
}


