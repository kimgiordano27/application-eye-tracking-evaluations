/*
FUNCTION_NAME: FUN_01637bcc
ENTRY_POINT: 01637bcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_01637bcc(long *param_1,undefined4 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_get_Item__;
  puVar1 = PTR_DAT_033f2b50;
  if ((DAT_0377821b & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<ViveLighthouse>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Polygon>_Add__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<XRController>__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_get_Item__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f2b50);
    thunk_FUN_00d48444(Sirenix_Serialization_UIntPtrSerializer_var);
    thunk_FUN_00d48444(
                      Method_System_Security_Cryptography_TripleDESCryptoServiceProvider_CreateDecryptor__
                      );
    DAT_0377821b = 1;
  }
  plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
  param_1[3] = (long)plVar4;
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar5 != 0) && (FUN_0162d4ac(lVar5,0x180,0x4000,8,0), plVar4 != (long *)0x0)) {
    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
    puVar1 = Method_System_Security_Cryptography_TripleDESCryptoServiceProvider_CreateDecryptor__;
    if (lVar6 == 0) {
      uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar4[4] = lVar5;
    FUN_0162d56c(param_1,param_2,0);
    uVar3 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_Collections_Generic_List<Polygon>_Add__;
    if (lVar5 != 0) {
      FUN_015f30f8(lVar5,uVar3,0);
      param_1[6] = lVar5;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 != 0) {
        System_BitConverter__GetBytes
                  (lVar6,param_1,*(undefined8 *)Sirenix_Serialization_UIntPtrSerializer_var,0);
        FUN_015f4c84(lVar5,lVar6,0);
        *(byte *)(param_1 + 5) = param_3 & 1;
        if ((param_3 & 1) != 0) {
          return;
        }
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<ViveLighthouse>__
                                  );
        puVar1 = Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<XRController>__;
        if (lVar5 != 0) {
          FUN_0162daa4(lVar5,1,0);
          uVar7 = FUN_01637ad8();
          if ((uVar7 & 1) != 0) {
            FUN_0162d94c(lVar5,*(uint *)(lVar5 + 0x2c) | 1,0);
          }
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar6 != 0) {
            FUN_015ef474(lVar6,lVar5,0);
            param_1[4] = lVar6;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


