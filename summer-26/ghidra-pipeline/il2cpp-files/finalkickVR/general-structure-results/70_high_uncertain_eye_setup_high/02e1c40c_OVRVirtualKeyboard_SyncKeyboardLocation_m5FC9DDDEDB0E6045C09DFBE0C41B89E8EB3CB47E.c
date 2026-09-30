/*
FUNCTION_NAME: OVRVirtualKeyboard_SyncKeyboardLocation_m5FC9DDDEDB0E6045C09DFBE0C41B89E8EB3CB47E
ENTRY_POINT: 02e1c40c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRVirtualKeyboard_SyncKeyboardLocation_m5FC9DDDEDB0E6045C09DFBE0C41B89E8EB3CB47E
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_20c;
  undefined4 local_54;
  ulong local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_30;
  long local_28;
  
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_30 = param_5;
  local_28 = param_4;
  if ((OVRVirtualKeyboard_SyncKeyboardLocation_m5FC9DDDEDB0E6045C09DFBE0C41B89E8EB3CB47E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_345);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_346);
    OVRVirtualKeyboard_SyncKeyboardLocation_m5FC9DDDEDB0E6045C09DFBE0C41B89E8EB3CB47E::
    s_Il2CppMethodInitialized = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  local_54 = 0;
  pvVar6 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28);
  NullCheck(pvVar6);
  bVar3 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(pvVar6,0);
  if ((bVar3 & 1) != 0) {
    pvVar6 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28);
    NullCheck(pvVar6);
    uVar4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(pvVar6,0);
    uVar4 = OVRVirtualKeyboard_MaxElement_mD64DA2EC02B34FD009A86F4AD26A9A398C29C21C
                      (uVar4,local_28,0);
    uVar8 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline((MethodInfo *)0x0);
    uVar4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                      (uVar8,param_2,param_3,uVar4,0);
    pvVar6 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28,0);
    NullCheck(pvVar6);
    Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633
              (uVar4,param_2,param_3,pvVar6,0);
    OVRVirtualKeyboard_UseSuggestedLocation_mB19E6823ADC820085AADCEF36E19E526C66F64C0(local_28,2,0);
  }
  uVar7 = *(undefined8 *)(local_28 + 0xf8);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uVar4 = OVRPlugin_GetTrackingOriginType_m2EDAA913509E615DD626803932B8CE16955F961A();
  bVar3 = OVRPlugin_TryLocateSpace_m845BF1CAA48C0AFCAA25673E1FAFD5A0D1CA8A41
                    (uVar7,uVar4,&local_50,0);
  if ((bVar3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(*(undefined8 *)StringLiteral_345,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar5 = OVRPlugin_GetVirtualKeyboardScale_m31632B67A1AE06EA01CB4E7535520736936A8459(&local_54,0)
    ;
    if (iVar5 == 0) {
      pvVar6 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28);
      uVar4 = uStack_3c;
      uVar8 = local_38;
      uVar9 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                        (local_40,0);
      uStack_20c = (undefined4)(local_50 >> 0x20);
      uVar11 = uStack_48;
      uVar12 = uStack_44;
      uVar10 = OVRExtensions_FromFlippedZQuatf_mF626F183B84EA8C08153550313227736286F2657
                         (local_50 & 0xffffffff,0);
      NullCheck(pvVar6);
      Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A
                (uVar9,uVar4,uVar8,uVar10,uStack_20c,uVar11,uVar12,pvVar6,0);
      uVar11 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline((MethodInfo *)0x0);
      uVar11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                         (uVar11,uVar4,uVar8,local_54,0);
      NullCheck(pvVar6);
      Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633
                (uVar11,uVar4,uVar8,pvVar6,0);
      NullCheck(pvVar6);
      Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(pvVar6,0,0);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(*(undefined8 *)StringLiteral_346,0);
    }
  }
  return;
}


