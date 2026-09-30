/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$CheckIfSharingAnchorServiceHung
ENTRY_POINT: 014bc2d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__CheckIfSharingAnchorServiceHung
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long in_x9;
  long lVar7;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  float fVar8;
  long in_stack_00000008;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar6 = 0;
  unaff_x19[0xe] = 0;
  while( true ) {
    puVar2 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    if (**(long **)(in_x9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *(long *)(**(long **)(in_x9 + 0xb8) + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar7 + 0x18) + -1 <= iVar6) {
      FUN_010db7b0(lVar7,&stack0x00000008,
                   *(undefined8 *)Method_Oculus_Platform_Request<UserCapabilityList>__ctor__);
      *(long *)(unaff_x19 + 0xc) = in_stack_00000008;
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar8 = *(float *)(in_stack_00000008 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar8 = fVar8 * 1000.0;
      iVar6 = -0x80000000;
      if (fVar8 != INFINITY) {
        iVar6 = (int)fVar8;
      }
      lVar7 = FUN_017f007c(iVar6,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar3 = FUN_017e7d88(lVar7,0);
      uVar4 = FUN_016a1310();
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x12) = uVar3;
        FUN_010bc698(unaff_x19 + 2);
      }
      else {
        FUN_016a13e0();
        if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar5 = (long *)FUN_014f3ce0(*(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x18),0);
        if (**(long **)(*unaff_x26 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar1 = *(undefined4 *)(**(long **)(*unaff_x26 + 0xb8) + 0x10);
        lVar7 = thunk_FUN_00d62348(*unaff_x25);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_014f5ed8(lVar7,uVar1,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar5 + 0x1b8))(plVar5,*unaff_x24,lVar7,*(undefined8 *)(*plVar5 + 0x1c0));
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*unaff_x20 + 0x448))();
        *(undefined8 *)(unaff_x19 + 0xc) = 0;
        *unaff_x19 = 0xfffffffe;
        FUN_016a1ab0(unaff_x19 + 2,0);
      }
      return;
    }
    FUN_0132138c(lVar7,iVar6,&stack0x00000008,
                 *(undefined8 *)Method_System_Collections_Generic_List<Type[]>_Add__);
    *(long *)(unaff_x19 + 0x10) = in_stack_00000008;
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar8 = *(float *)(in_stack_00000008 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar8 = fVar8 * 1000.0;
    iVar6 = -0x80000000;
    if (fVar8 != INFINITY) {
      iVar6 = (int)fVar8;
    }
    lVar7 = FUN_017f007c(iVar6,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = FUN_017e7d88(lVar7,0);
    uVar4 = FUN_016a1310();
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = uVar3;
      FUN_010bc698(unaff_x19 + 2);
      return;
    }
    FUN_016a13e0();
    if (*(long *)(unaff_x19 + 0x10) == 0) break;
    plVar5 = (long *)FUN_014f3ce0(*(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18),0);
    if (**(long **)(*unaff_x26 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar1 = *(undefined4 *)(**(long **)(*unaff_x26 + 0xb8) + 0x10);
    lVar7 = thunk_FUN_00d62348(*unaff_x25);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_014f5ed8(lVar7,uVar1,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar5 + 0x1b8))(plVar5,*unaff_x24,lVar7,*(undefined8 *)(*plVar5 + 0x1c0));
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*unaff_x20 + 0x448))();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    iVar6 = unaff_x19[0xe] + 1;
    unaff_x19[0xe] = iVar6;
    in_x9 = *unaff_x26;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


