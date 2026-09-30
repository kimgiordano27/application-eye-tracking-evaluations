/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$.ctor
ENTRY_POINT: 03fc3c84
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03fc4160) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_x9;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  int iVar10;
  void *unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  size_t unaff_x25;
  void *unaff_x26;
  size_t unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      lVar2 = param_1 + (long)*in_x10 * 0x10 + 0x138;
      goto LAB_03fc3d58;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  lVar2 = FUN_0322c1e8();
LAB_03fc3d58:
  *(void **)(unaff_x29 + -0xe0) = unaff_x21;
  (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
  memcpy(unaff_x28,unaff_x21,unaff_x27);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar7 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x20);
  uVar3 = *puVar7;
  *(void **)(unaff_x29 + -0xe0) = unaff_x26;
  (*(code *)puVar7[2])(uVar3);
  memcpy(unaff_x22,unaff_x26,unaff_x25);
  puVar1 = PTR_DAT_075d6380;
  do {
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x50))();
    if ((uVar4 & 1) == 0) goto LAB_03fc4078;
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x38))();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar8 = *plVar5;
    lVar2 = *(long *)puVar1;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fc3e60;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_0322c1e8(plVar5,lVar2,0);
LAB_03fc3e60:
    uVar3 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    uVar6 = FUN_06ef14e8(unaff_x29 + -0x30,0);
    uVar4 = FUN_05c86f74(uVar3,uVar6,0);
  } while ((uVar4 & 1) != 0);
  lVar8 = *plVar5;
  lVar2 = *(long *)puVar1;
  uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar2) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_03fc3f00;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar5,lVar2,1);
LAB_03fc3f00:
  uVar3 = (*(code *)*puVar7)(plVar5,puVar7[1]);
  *unaff_x23 = uVar3;
  thunk_FUN_0329bf60();
  plVar5 = (long *)FUN_06ef4c18(uVar3,0);
  if (plVar5 == (long *)0x0) {
    uVar3 = FUN_0706e39c(uVar3,0);
    if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = FUN_05e1a748(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
LAB_03fc4078:
      iVar10 = 0x13;
      goto LAB_03fc40a8;
    }
    uVar4 = FUN_0706e31c();
    if ((uVar4 & 1) == 0) {
      memcpy((void *)(unaff_x29 + -0xc0),*(void **)(unaff_x29 + -0xf8),0x90);
      iVar10 = *(int *)(unaff_x19 + 0xb8);
      *(int *)(unaff_x19 + 0xb8) = iVar10 + 1;
      FUN_06ef19d0(unaff_x29 + -0xe0,unaff_x29 + -0xc0,iVar10,0);
      *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0xd8);
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0xe0);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -200);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0xd0);
      uVar4 = FUN_06ef14d0(unaff_x29 + -0x30,0);
      if ((uVar4 & 1) == 0) goto LAB_03fc4078;
      *unaff_x23 = uVar3;
      thunk_FUN_0329bf60();
      plVar5 = (long *)FUN_06ef4c18(uVar3,0);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075d7cd0) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03fc4148;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)PTR_DAT_075d7cd0,0);
LAB_03fc4148:
        (*(code *)*puVar7)(plVar5);
      }
    }
  }
  else {
    lVar2 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075d7cd0) {
          puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fc4090;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)PTR_DAT_075d7cd0,0);
LAB_03fc4090:
    (*(code *)*puVar7)(plVar5);
  }
  iVar10 = 3;
LAB_03fc40a8:
  lVar8 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(lVar8 + 0x30);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
    lVar8 = *(long *)(unaff_x20 + 0x38);
  }
  FUN_031f2c78(lVar2,*(undefined8 *)(lVar8 + 0x58),*(undefined8 *)(unaff_x29 + -0xf0));
  if ((((iVar10 == 0) || (iVar10 == 0x13)) && (uVar4 = FUN_0706e31c(), (uVar4 & 1) == 0)) &&
     (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0xe8) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


