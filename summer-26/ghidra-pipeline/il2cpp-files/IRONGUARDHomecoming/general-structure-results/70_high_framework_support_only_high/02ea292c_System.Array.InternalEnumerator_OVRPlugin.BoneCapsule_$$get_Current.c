/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$get_Current
ENTRY_POINT: 02ea292c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02ea2c94) */
/* WARNING: Removing unreachable block (ram,0x02ea2c04) */

void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__get_Current
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x29;
  
  if (param_2 == 1) {
    puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar2 = thunk_FUN_01efb3a4();
    uVar3 = thunk_FUN_01ef6ec0(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) == 0) {
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&
                         PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                  ,0);
    }
    uVar2 = *puVar1;
    __cxa_end_catch();
    lVar4 = thunk_FUN_01efb3a4();
    lVar7 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto code_r0x02ea29c0;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x02ea29c0:
    lVar4 = (*(code *)*puVar1)();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390c3d4(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b70c(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0390bec0(lVar4,uVar2,0);
    while (uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x98)
                   )(), (uVar3 & 1) != 0) {
      puVar1 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80);
      uVar2 = *puVar1;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
      (*(code *)puVar1[2])(uVar2);
      memcpy(unaff_x25,unaff_x24,unaff_x23);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
      memcpy(unaff_x24,unaff_x25,unaff_x23);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      puVar1 = unaff_x24;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x58) + 0x28)) {
        puVar1 = (undefined8 *)*unaff_x24;
      }
      puVar6 = *(undefined8 **)(lVar7 + 0x90);
      uVar2 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
      *(long **)(unaff_x29 + -0x10) = unaff_x19;
      (*(code *)puVar6[2])(uVar2,puVar6,lVar4,unaff_x29 + -0x18);
    }
    lVar4 = 0;
  }
  else {
    if (param_2 != 1) {
      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 0x78);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
        lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      }
      FUN_01f09244(lVar4,*(undefined8 *)(lVar7 + 0xa0),*(undefined8 *)(unaff_x29 + -0x30));
      if (param_2 != 1) {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
              goto code_r0x02ea2c7c;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x02ea2c7c:
        (*(code *)*puVar1)();
                    /* WARNING: Subroutine does not return */
        FUN_01fbfd14(param_1);
      }
      plVar5 = (long *)__cxa_begin_catch(param_1);
      lVar4 = *plVar5;
      __cxa_end_catch();
      goto code_r0x02ea2a3c;
    }
    plVar5 = (long *)__cxa_begin_catch(param_1);
    lVar4 = *plVar5;
    __cxa_end_catch();
  }
  lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar7 = *(long *)(lVar8 + 0x78);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar7,*(undefined8 *)(lVar8 + 0xa0),*(undefined8 *)(unaff_x29 + -0x30));
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar4);
  }
  lVar4 = 0;
code_r0x02ea2a3c:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar1 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
        goto LAB_02ea2a98;
      }
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02ea2a98:
  (*(code *)*puVar1)();
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar4);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


