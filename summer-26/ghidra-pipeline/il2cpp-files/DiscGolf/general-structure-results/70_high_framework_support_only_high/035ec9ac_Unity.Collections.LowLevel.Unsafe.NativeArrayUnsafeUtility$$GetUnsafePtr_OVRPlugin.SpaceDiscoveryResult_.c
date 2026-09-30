/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$GetUnsafePtr<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 035ec9ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035ecb10) */

void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>
               (long param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  int unaff_w23;
  int iVar9;
  long *unaff_x27;
  long *in_stack_00000010;
  
  do {
    lVar4 = FUN_065c4618(param_1,0);
    if (lVar4 == 0) {
      if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar7 = FUN_065b14d0(in_stack_00000010,0);
      iVar6 = 4;
      if ((uVar7 & 1) == 0) {
        iVar6 = 10;
      }
    }
    else {
      FUN_0659ea54();
      iVar6 = 4;
    }
    if (in_stack_00000010 != (long *)0x0) {
      lVar4 = *in_stack_00000010;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<CAPI_ovrAvatar2Vector4f>
            ;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000010,*(long *)PTR_DAT_069fbff0,0);

      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<CAPI_ovrAvatar2Vector4f>
      :
      (*(code *)*puVar5)(in_stack_00000010,puVar5[1]);
    }
    iVar9 = unaff_w23;
    if ((iVar6 != 10) && (iVar6 != 0)) {
      return;
    }
    do {
      do {
        unaff_w23 = iVar9 + -1;
        if (iVar9 < 1) {
          return;
        }
        plVar2 = (long *)FUN_0400ff1c();
        iVar9 = unaff_w23;
      } while (plVar2 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
    } while ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
            (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_stack_00000010 = (long *)(**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
    lVar4 = (**(code **)(*plVar2 + 0x3c8))(plVar2,*(undefined8 *)(*plVar2 + 0x3d0));
    if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_stack_00000010[7] = lVar4;
    LeanTween__value(in_stack_00000010 + 7);
    plVar3 = (long *)(**(code **)(*plVar2 + 0x3c8))(plVar2,*(undefined8 *)(*plVar2 + 0x3d0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    (**(code **)(*plVar3 + 0x188))(plVar3,in_stack_00000010,*(undefined8 *)(*plVar3 + 400));
    param_1 = (**(code **)(*plVar2 + 0x268))(plVar2,*(undefined8 *)(*plVar2 + 0x270));
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  } while( true );
}


