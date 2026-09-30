/*
FUNCTION_NAME: FUN_027c3784
ENTRY_POINT: 027c3784
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_027c3784(long param_1,long param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03788884 & 1) == 0) {
    thunk_FUN_00d48444(System_Text_UTF8Encoding_UTF8Decoder_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Add__);
    thunk_FUN_00d48444(StringLiteral_13708);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<object,_int>_TryGetValue__);
    thunk_FUN_00d48444(StringLiteral_12842);
    thunk_FUN_00d48444(StringLiteral_4741);
    thunk_FUN_00d48444(StringLiteral_13572);
    DAT_03788884 = 1;
  }
  puVar6 = StringLiteral_13708;
  puVar5 = StringLiteral_13572;
  puVar4 = StringLiteral_12842;
  puVar3 = Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__;
  puVar2 = Method_System_Collections_Generic_List<Collider>_Add__;
  puVar1 = System_Text_UTF8Encoding_UTF8Decoder_TypeInfo;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x10),&local_98,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<object,_int>_TryGetValue__);
    iVar7 = 0;
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar8 = FUN_012b894c(&local_80,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
      lVar9 = FUN_00cea774(&local_80,*(undefined8 *)puVar2);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((*(float *)(param_2 + 0x5c) <= *(float *)(lVar9 + 0x5c)) &&
         ((*(float *)(param_2 + 0x5c) < *(float *)(lVar9 + 0x5c) ||
          (*(int *)(param_2 + 0x18) <= *(int *)(lVar9 + 0x18))))) break;
      iVar7 = iVar7 + 1;
    }
    FUN_012b8948(&local_80,*(undefined8 *)puVar1);
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      if (iVar7 < *(int *)(lVar9 + 0x18)) {
        FUN_01323a14(lVar9,iVar7,param_2,*(undefined8 *)puVar4);
        if (param_3 == 0) {
          return;
        }
        if (param_2 == 0) goto LAB_027c3a24;
        if (*(long *)(param_2 + 0x50) == 0) {
          return;
        }
        iVar10 = iVar7;
        if (0 < iVar7) {
          do {
            iVar10 = iVar10 + -1;
            if (iVar10 == -1) goto LAB_027c3970;
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (FUN_0132138c(*(long *)(param_1 + 0x10),iVar10,&local_98,*(undefined8 *)puVar5),
               local_98 == 0)) goto LAB_027c3a24;
          } while (*(long *)(local_98 + 0x50) == 0);
          iVar7 = FUN_027528d4(param_3,*(long *)(local_98 + 0x50),0);
          iVar7 = iVar7 + 1;
        }
LAB_027c3970:
        iVar10 = FUN_02752820(param_3,0);
        if (iVar10 < iVar7) {
          iVar7 = FUN_02752820(param_3,0);
        }
      }
      else {
        FUN_00cea87c(lVar9,param_2,*(undefined8 *)puVar6);
      }
      if (param_3 != 0) {
        if (param_2 == 0) goto LAB_027c3a24;
        if (*(long *)(param_2 + 0x50) != 0) {
          iVar10 = FUN_02752820(param_3,0);
          if (iVar7 + param_4 < iVar10) {
            FUN_02751fc0(param_3,iVar7 + param_4,*(undefined8 *)(param_2 + 0x50),0);
          }
          else {
            FUN_02751e94(param_3,*(undefined8 *)(param_2 + 0x50),0);
          }
        }
      }
      return;
    }
  }
LAB_027c3a24:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


