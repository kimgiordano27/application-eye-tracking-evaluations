/*
FUNCTION_NAME: Shapes.MpbCone$$.ctor
ENTRY_POINT: 037b5ee4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x037b6050) */

void Shapes_MpbCone___ctor(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    uVar3 = thunk_FUN_0340e318(param_1,param_2,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = thunk_FUN_0340e318(param_1,*unaff_x28,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = thunk_FUN_0340e318(param_1,*unaff_x29,0);
        if ((uVar3 & 1) != 0) {
          lVar4 = *(long *)(unaff_x21 + 0x38);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
            *puVar2 = unaff_x20;
            thunk_FUN_01f51358(puVar2);
          }
          else {
            FUN_030f2bb4();
          }
        }
      }
      else {
        *unaff_x22 = unaff_x20;
        thunk_FUN_01f51358();
      }
    }
    else {
      *unaff_x23 = unaff_x20;
      thunk_FUN_01f51358();
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_037b5e78;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_037b5e78:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) break;
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_037b5ed4;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_037b5ed4:
    param_1 = (*(code *)*puVar2)();
    param_2 = *unaff_x27;
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_037b6010;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_037b6010:
    (*(code *)*puVar2)();
  }
  return;
}


