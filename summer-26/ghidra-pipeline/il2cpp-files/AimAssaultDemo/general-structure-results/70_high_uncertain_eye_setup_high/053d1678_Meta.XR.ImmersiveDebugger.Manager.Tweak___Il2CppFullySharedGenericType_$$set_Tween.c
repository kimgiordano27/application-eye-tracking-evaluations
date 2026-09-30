/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<__Il2CppFullySharedGenericType>$$set_Tween
ENTRY_POINT: 053d1678
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x053d19bc) */

void Meta_XR_ImmersiveDebugger_Manager_Tweak<__Il2CppFullySharedGenericType>__set_Tween
               (long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w25;
  undefined8 in_stack_00000008;
  
  do {
    if (unaff_w25 == 0) {
      uVar8 = Newtonsoft_Json_Linq_Extensions_<Convert>d__14<object,_object>__System_IDisposable_Dispose
                        ();
    }
    else {
      lVar10 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03775678(lVar10);
      }
      lVar11 = *unaff_x21;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_053d16f4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c();
LAB_053d16f4:
      (*(code *)*puVar7)();
      uVar8 = FUN_0426dd6c();
    }
    lVar10 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_053d19b4;
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4();
    }
    iVar1 = in_stack_00000008._4_4_ + 1;
    in_stack_00000008._4_4_ = iVar1;
    iVar6 = (**(code **)(*unaff_x19 + 0x618))();
    unaff_w25 = in_stack_00000008._4_4_;
    if (iVar6 <= iVar1) break;
    FUN_06240534((long)&stack0x00000008 + 4,0);
    param_1 = *(long *)(unaff_x20 + 0x20);
  } while( true );
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) == 0)
  {
    FUN_03775678();
  }
  thunk_FUN_037788cc();
  FUN_044a4918();
  lVar10 = FUN_0426e774();
  if (lVar10 != 0) {
    lVar10 = FUN_0732b39c(lVar10,0);
    unaff_x19[0x14] = lVar10;
    thunk_FUN_037aeb94(unaff_x19 + 0x14,lVar10);
    puVar3 = PTR_DAT_07d896f8;
    if (unaff_x19[0x13] != 0) {
      plVar9 = (long *)FUN_051395a8(unaff_x19[0x13],*(undefined8 *)PTR_DAT_07d99050);
      puVar5 = PTR_DAT_07d99048;
      puVar4 = PTR_DAT_07d89700;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar10 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_053d18b8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar4,0);
LAB_053d18b8:
        uVar12 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if ((uVar12 & 1) == 0) goto LAB_053d1938;
        lVar10 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_053d1914;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar5,0);
LAB_053d1914:
        (*(code *)*puVar7)(plVar9,puVar7[1]);
        thunk_FUN_07331220();
      } while( true );
    }
  }
LAB_053d19b4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
LAB_053d1938:
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_053d198c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar3,0);
LAB_053d198c:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  return;
}


