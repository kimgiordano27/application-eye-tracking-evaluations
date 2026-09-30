/*
FUNCTION_NAME: Oculus.Platform.Models.DestinationList$$.ctor
ENTRY_POINT: 03613bf8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03613dc0) */

undefined4 Oculus_Platform_Models_DestinationList___ctor(code *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uVar8;
  long unaff_x21;
  long *unaff_x23;
  long lVar9;
  long *unaff_x24;
  
  while( true ) {
    lVar2 = (*param_1)();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (lVar2 == *(long *)(unaff_x21 + 0x30)) break;
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03613b98;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03613b98:
    uVar3 = (*(code *)*puVar5)();
    if ((uVar3 & 1) == 0) {
      uVar8 = 0;
      goto joined_r0x03613d34;
    }
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03613bf4;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03613bf4:
    param_1 = (code *)*puVar5;
  }
  if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_02b6b4d8(*(long *)(unaff_x20 + 0x48),lVar2,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_78__);
  if ((uVar3 & 1) == 0) {
    lVar9 = *(long *)(unaff_x20 + 0x48);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_85__
                              );
    FUN_030f2380(uVar4,*(undefined8 *)
                        Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_84__);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02b6b2e4(lVar9,lVar2,uVar4,
                 *(undefined8 *)Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_77__
                );
  }
  if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_02b6b264(*(long *)(unaff_x20 + 0x48),lVar2,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_79__);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_030f2f44(lVar2,*(undefined8 *)(unaff_x21 + 0x38),
                       *(undefined8 *)
                        Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_83__);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x21 + 0x38);
    lVar9 = *(long *)(lVar2 + 0x10);
    lVar6 = *(long *)Method_Unity_VisualScripting_GreaterThanHandler_<>c_<_ctor>b__0_82__;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4(lVar2,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar8 = 1;
joined_r0x03613d34:
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03613d8c;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03613d8c:
    (*(code *)*puVar5)();
  }
  return uVar8;
}


