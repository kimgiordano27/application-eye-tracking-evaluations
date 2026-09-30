/*
FUNCTION_NAME: FUN_037f590c
ENTRY_POINT: 037f590c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long FUN_037f590c(undefined4 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  puVar4 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
  puVar2 = Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 037f593c to 038f5a5f has its CatchHandler @ 037f593c
                       catch() { ... } // from try @ 037f593c with catch @ 037f593c
                       catch() { ... } // from try @ 037f5d04 with catch @ 037f593c
                       catch() { ... } // from try @ 037f5d40 with catch @ 037f593c
                       catch() { ... } // from try @ 037f5e68 with catch @ 037f593c
                       catch() { ... } // from try @ 037f5e70 with catch @ 037f593c
                       catch() { ... } // from try @ 037f5f44 with catch @ 037f593c */
  if ((DAT_04539004 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(PTR_DAT_04230108);
    FUN_01c5d288(Method_Newtonsoft_Json_Linq_JTokenReader_GetEndToken__);
    FUN_01c5d288(Method_I2_Loc_SimpleJSON_JSONNode_Deserialize__);
    FUN_01c5d288(Method_System_ComponentModel_LicenseManager_UnlockContext__);
    FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_OnKeyGenerated__);
    FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__);
    FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_ImportCspBlob__);
    DAT_04539004 = 1;
  }
  lVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_037f5c1c();
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar3 = Method_System_Security_Cryptography_DSACryptoServiceProvider_OnKeyGenerated__;
  puVar2 = PTR_DAT_04230108;
  if (lVar5 != 0) {
    FUN_03804360(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50),0);
    lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
    FUN_037f3aa4();
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar7 = *(long *)puVar2;
    }
    puVar2 = Method_System_Security_Cryptography_DSACryptoServiceProvider_ImportCspBlob__;
    if (lVar6 != 0) {
      FUN_037fb264(lVar6,**(undefined8 **)(lVar7 + 0xb8),(*(undefined8 **)(lVar7 + 0xb8))[1],0);
      local_58 = 0;
      uStack_50 = 0;
      FUN_0332c71c(&local_58,0xffffffff,0xffffffff,0xffffffff,0,0,0);
      FUN_037fb39c(lVar6,local_58,uStack_50,0);
      *(undefined4 *)(lVar6 + 0x80) = param_1;
      FUN_037f395c(lVar6,0);
      plVar8 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar2);
      FUN_037fb9bc(plVar8,0);
      if (plVar8 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        puVar2 = Method_I2_Loc_SimpleJSON_JSONNode_Deserialize__;
        if (lVar7 != 0) {
          FUN_037f2e04(lVar7,lVar6);
          *(long **)(lVar5 + 0xb8) = plVar8;
          *(undefined4 *)(lVar5 + 0x90) = 3;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = FUN_037cc0f8(0);
          FUN_038043bc(lVar5,uVar9,0);
          lVar7 = FUN_038043a4(lVar5,0);
          puVar2 = Method_Newtonsoft_Json_Linq_JTokenReader_GetEndToken__;
          if (lVar7 != 0) {
            *(long *)(lVar7 + 0x28) = lVar5;
            lVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
            FUN_038d7174(lVar7,3,0);
            if (lVar7 != 0) {
              FUN_038d72a4(lVar7,0);
              FUN_038d7354(lVar7,0);
              FUN_038d7688(lVar7,*(undefined8 *)(lVar6 + 0x88),lVar6,0);
              FUN_038d78d4(lVar7,0);
              FUN_038d737c(lVar7,0);
              uVar9 = FUN_038d7c20(lVar7,1,0);
              lVar6 = FUN_038043a4(lVar5,0);
              puVar2 = Method_System_ComponentModel_LicenseManager_UnlockContext__;
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x80) = uVar9;
                lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                FUN_03313b6c(lVar6,0);
                if (lVar6 != 0) {
                  *(undefined4 *)(lVar6 + 0x58) = param_1;
                  FUN_037f3b30(lVar6,0);
                  *(long *)(lVar5 + 0xd8) = lVar6;
                  lVar7 = FUN_038043a4(lVar5,0);
                  if (lVar7 != 0) {
                    *(long *)(lVar7 + 0x88) = lVar6;
                    if (*(long *)(lVar1 + 0x28) == local_48) {
                      return lVar5;
                    }
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


