/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<OVRPlugin.SpaceDiscoveryResult>>
ENTRY_POINT: 047109ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04710c10) */
/* WARNING: Removing unreachable block (ram,0x04710c24) */

int Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_SpaceDiscoveryResult>>
              (long param_1,undefined8 param_2,long param_3)

{
  void *__src;
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x21;
  void *unaff_x23;
  undefined8 *unaff_x24;
  int unaff_w25;
  void *unaff_x26;
  long *unaff_x27;
  long *plVar8;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_047109d8;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_03ac43c4(unaff_x27,param_3,0);
LAB_047109d8:
        uVar2 = (*(code *)*puVar1)(unaff_x27,puVar1[1]);
        if ((uVar2 & 1) == 0) {
          unaff_w25 = -1;
LAB_04710b38:
          plVar8 = *(long **)(unaff_x29 + -0x28);
          if (plVar8 == (long *)0x0)
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeList<ConnectionDataMap_ConnectionSlot<TCPNetworkInterface_ConnectionData>>>
          ;
          lVar3 = *plVar8;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 == 0)
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeList<ConnectionDataMap_ConnectionSlot<ConnectionList_ConnectionData>>>
          ;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<NetworkListEvent<NetcodeGameObjectsPlayer>>
          ;
        }
        plVar8 = *(long **)(unaff_x29 + -0x28);
        if (plVar8 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_04710c90;
        }
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090(lVar3);
        }
        lVar5 = *plVar8;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              lVar3 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
              goto LAB_04710a58;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        lVar3 = FUN_03ac43c4(plVar8,lVar3,0);
LAB_04710a58:
        lVar3 = *(long *)(lVar3 + 8);
        *(void **)(unaff_x29 + -0x18) = unaff_x23;
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar8,unaff_x29 + -0x18);
        memcpy(unaff_x26,unaff_x23,unaff_x21);
        lVar3 = *(long *)(unaff_x19 + 0x38);
        __src = unaff_x20;
        if (-1 < *(int *)(*(long *)(lVar3 + 0x28) + 0x28)) {
          __src = (void *)(unaff_x29 + -0x20);
        }
        memcpy(unaff_x24,__src,unaff_x21);
        lVar6 = *(long *)(lVar3 + 0x28);
        lVar5 = lVar6;
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03ac4090(lVar6);
          lVar3 = *(long *)(unaff_x19 + 0x38);
          lVar5 = *(long *)(lVar3 + 0x28);
        }
        puVar1 = unaff_x24;
        if (-1 < *(int *)(lVar5 + 0x28)) {
          puVar1 = (undefined8 *)*unaff_x24;
        }
        uVar4 = *(undefined8 *)(lVar3 + 0x38);
        *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
        FUN_03a8b394(lVar6,uVar4);
        if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_04710b38;
        unaff_x27 = *(long **)(unaff_x29 + -0x28);
        unaff_w25 = unaff_w25 + 1;
        if (unaff_x27 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_04710c90;
        }
        param_1 = *unaff_x27;
        param_3 = *unaff_x28;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<NetworkListEvent<NetcodeGameObjectsPlayer>>:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08488550) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04710b98;
    }
  }

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeList<ConnectionDataMap_ConnectionSlot<ConnectionList_ConnectionData>>>
  :
  puVar1 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)PTR_DAT_08488550,0);
LAB_04710b98:
  (*(code *)*puVar1)(plVar8,puVar1[1]);

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeList<ConnectionDataMap_ConnectionSlot<TCPNetworkInterface_ConnectionData>>>
  :
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w25;
  }
LAB_04710c90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


