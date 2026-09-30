/*
FUNCTION_NAME: FUN_06c90848
ENTRY_POINT: 06c90848
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06c90848(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_072794f0;
  if ((DAT_076e9103 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07288d60);
    thunk_FUN_032e1da0(PTR_DAT_0727c5b8);
    thunk_FUN_032e1da0(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory<TouchState>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_System_Linq_Expressions_Interpreter_DelegateHelpers_MakeDelegate__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<Finger>__
                      );
    thunk_FUN_032e1da0(Method_System_IO_Compression_DeflateStream_Seek__);
    thunk_FUN_032e1da0(PTR_DAT_0727b9e8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputEventPtr>__
                      );
    thunk_FUN_032e1da0(Method_System_ValueTuple<Vector4,_Vector4>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_0727b668);
    thunk_FUN_032e1da0(Method_UnityEngine_IntegratedSubsystemDescriptor<XRDisplaySubsystem>__ctor__)
    ;
    thunk_FUN_032e1da0(Method_UnityEngine_IntegratedSubsystemDescriptor<XRInputSubsystem>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_IntegratedSubsystemDescriptor<XRMeshSubsystem>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_IntegratedSubsystem<XRDisplaySubsystemDescriptor>__ctor__)
    ;
    thunk_FUN_032e1da0(
                      Method_UnityEngine_IntegratedSubsystem<XRDisplaySubsystemDescriptor>_get_subsystemDescriptor__
                      );
    DAT_076e9103 = 1;
  }
  local_48 = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x100);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar3 = PTR_DAT_072798f8;
  uVar6 = FUN_06becf70(uVar12,0);
  puVar4 = 
  Method_UnityEngine_IntegratedSubsystem<XRDisplaySubsystemDescriptor>_get_subsystemDescriptor__;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb2b08(*(undefined8 *)puVar4,param_1,0);
    return;
  }
  if ((*(long *)(param_1 + 0x100) == 0) ||
     (lVar7 = FUN_06be6b40(*(long *)(param_1 + 0x100),0), lVar7 == 0)) goto LAB_06c90efc;
  FUN_06be9a98(lVar7,1,0);
  if (*(long *)(param_1 + 0x100) == 0) goto LAB_06c90efc;
  lVar8 = FUN_03958d40(*(long *)(param_1 + 0x100),*(undefined8 *)PTR_DAT_07288d60);
  *(undefined1 *)(param_1 + 0x168) = 1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar2);
  }
  uVar6 = FUN_06becf70(lVar8,0);
  if ((uVar6 & 1) == 0) {
LAB_06c90a2c:
    *(undefined1 *)(param_1 + 0x168) = 0;
    uVar12 = *(undefined8 *)(param_1 + 0x100);
    puVar11 = (undefined8 *)
              Method_UnityEngine_IntegratedSubsystemDescriptor<XRInputSubsystem>__ctor__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      puVar11 = (undefined8 *)
                Method_UnityEngine_IntegratedSubsystemDescriptor<XRInputSubsystem>__ctor__;
    }
LAB_06c90ad0:
    FUN_06bb2b08(*puVar11,uVar12,0);
  }
  else {
    if (lVar8 == 0) goto LAB_06c90efc;
    uVar12 = FUN_06be6b04(lVar8,0);
    uVar13 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar2);
    }
    uVar6 = FUN_06bece64(uVar12,uVar13,0);
    if ((uVar6 & 1) != 0) goto LAB_06c90a2c;
    lVar9 = FUN_06be6b04(lVar8,0);
    if (lVar9 == 0) goto LAB_06c90efc;
    plVar10 = (long *)FUN_06bf4764(lVar9,0);
    if ((plVar10 == (long *)0x0) || (*plVar10 != *(long *)PTR_DAT_0727b668)) {
      *(undefined1 *)(param_1 + 0x168) = 0;
      uVar12 = *(undefined8 *)(param_1 + 0x100);
      puVar11 = (undefined8 *)
                Method_UnityEngine_IntegratedSubsystem<XRDisplaySubsystemDescriptor>__ctor__;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        puVar11 = (undefined8 *)
                  Method_UnityEngine_IntegratedSubsystem<XRDisplaySubsystemDescriptor>__ctor__;
      }
      goto LAB_06c90ad0;
    }
    uVar12 = *(undefined8 *)(param_1 + 0x118);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar6 = FUN_06be9890(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x118) == 0) goto LAB_06c90efc;
      lVar9 = FUN_06be6b04(*(long *)(param_1 + 0x118),0);
      uVar12 = FUN_06be6b04(lVar8,0);
      if (lVar9 == 0) goto LAB_06c90efc;
      uVar6 = FUN_06bf63e8(lVar9,uVar12,0);
      if ((uVar6 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x168) = 0;
        uVar12 = *(undefined8 *)(param_1 + 0x100);
        puVar11 = (undefined8 *)
                  Method_UnityEngine_IntegratedSubsystemDescriptor<XRDisplaySubsystem>__ctor__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          puVar11 = (undefined8 *)
                    Method_UnityEngine_IntegratedSubsystemDescriptor<XRDisplaySubsystem>__ctor__;
        }
        goto LAB_06c90ad0;
      }
    }
    uVar12 = *(undefined8 *)(param_1 + 0x120);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar6 = FUN_06be9890(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x120) == 0) goto LAB_06c90efc;
      lVar9 = FUN_06be6b04(*(long *)(param_1 + 0x120),0);
      uVar12 = FUN_06be6b04(lVar8,0);
      if (lVar9 == 0) goto LAB_06c90efc;
      uVar6 = FUN_06bf63e8(lVar9,uVar12,0);
      if ((uVar6 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x168) = 0;
        uVar12 = *(undefined8 *)(param_1 + 0x100);
        puVar11 = (undefined8 *)
                  Method_UnityEngine_IntegratedSubsystemDescriptor<XRMeshSubsystem>__ctor__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          puVar11 = (undefined8 *)
                    Method_UnityEngine_IntegratedSubsystemDescriptor<XRMeshSubsystem>__ctor__;
        }
        goto LAB_06c90ad0;
      }
    }
  }
  if (*(char *)(param_1 + 0x168) == '\0') {
    FUN_06be9a98(lVar7,0,0);
    return;
  }
  if (((lVar8 != 0) && (lVar9 = FUN_06be6b40(lVar8,0), lVar9 != 0)) &&
     (lVar9 = FUN_039efc38(lVar9,*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputEventPtr>__
                          ), lVar9 != 0)) {
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(param_1 + 0x118);
    thunk_FUN_0333a630();
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(param_1 + 0x120);
    thunk_FUN_0333a630();
    *(long *)(lVar9 + 0x38) = lVar8;
    thunk_FUN_0333a630((long *)(lVar9 + 0x38),lVar8);
    plVar10 = (long *)FUN_06be6b04(lVar8,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)PTR_DAT_0727b668)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar10);
    }
    *(long *)(lVar9 + 0x30) = (long)plVar10;
    thunk_FUN_0333a630((long *)(lVar9 + 0x30),plVar10);
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar8 = FUN_06bf4764(*(long *)(param_1 + 0x100),0);
      puVar3 = PTR_DAT_0727c5b8;
      lVar9 = 0;
      while( true ) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar6 = FUN_06be9890(lVar8,0,0);
        if ((uVar6 & 1) == 0) break;
        if (lVar8 == 0) goto LAB_06c90efc;
        lVar9 = FUN_03958adc(lVar8,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)puVar2);
        }
        uVar6 = FUN_06be9890(lVar9,0,0);
        if ((uVar6 & 1) != 0) break;
        lVar8 = FUN_06bf4764(lVar8,0);
      }
      uVar6 = FUN_039f107c(lVar7,&local_48,
                           *(undefined8 *)Method_System_ValueTuple<Vector4,_Vector4>__ctor__);
      if ((uVar6 & 1) == 0) {
        lVar8 = FUN_039efc38(lVar7,*(undefined8 *)PTR_DAT_0727b9e8);
        if (lVar8 == 0) goto LAB_06c90efc;
        FUN_06de6be4(lVar8,1,0);
        FUN_06de6c64(lVar8,30000,0);
        if (param_2 == 0) goto LAB_06c90efc;
        uVar5 = FUN_06de6d28(param_2,0);
        FUN_06de6d64(lVar8,uVar5,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar6 = FUN_06be9890(lVar9,0,0);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)Method_System_IO_Compression_DeflateStream_Seek__ + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_0396ea5c(lVar7,*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<Finger>__
                    );
      }
      else {
        if ((lVar9 == 0) ||
           (lVar8 = FUN_039593b8(lVar9,*(undefined8 *)
                                        Method_UnityEngine_InputSystem_LowLevel_InputStateHistory<TouchState>__ctor__
                                ), lVar8 == 0)) goto LAB_06c90efc;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar14 = 0;
          do {
            if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            lVar9 = *(long *)(lVar8 + (long)(int)uVar14 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_06c90efc;
            uVar12 = thunk_FUN_032f70fc(lVar9,0);
            uVar13 = FUN_06be6bf4(lVar7,uVar12,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)puVar2);
            }
            uVar6 = FUN_06bece64(uVar13,0,0);
            if ((uVar6 & 1) != 0) {
              FUN_06be9998(lVar7,uVar12,0);
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uVar1);
        }
      }
      if (*(int *)(*(long *)Method_System_IO_Compression_DeflateStream_Seek__ + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_0396ea5c(lVar7,*(undefined8 *)
                          Method_System_Linq_Expressions_Interpreter_DelegateHelpers_MakeDelegate__)
      ;
      FUN_06be9a98(lVar7,0,0);
      *(undefined1 *)(param_1 + 0x168) = 1;
      return;
    }
  }
LAB_06c90efc:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


