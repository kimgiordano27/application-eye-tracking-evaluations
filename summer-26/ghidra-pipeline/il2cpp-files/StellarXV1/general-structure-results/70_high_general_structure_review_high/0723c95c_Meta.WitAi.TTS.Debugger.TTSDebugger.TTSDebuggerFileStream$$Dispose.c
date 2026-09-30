/*
FUNCTION_NAME: Meta.WitAi.TTS.Debugger.TTSDebugger.TTSDebuggerFileStream$$Dispose
ENTRY_POINT: 0723c95c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


ulong Meta_WitAi_TTS_Debugger_TTSDebugger_TTSDebuggerFileStream__Dispose(ulong param_1)

{
  ushort uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int in_w8;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint in_w10;
  undefined *puVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 uStack0000000000000000;
  uint uStack0000000000000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  
code_r0x0723c95c:
  if (!(bool)in_CY || (bool)in_ZR) {
    if (unaff_w25 < in_w10) {
      if (in_w10 < 0x25bd) {
        if (in_w10 == 0x25ba) {
          uVar4 = 0x10;
          goto switchD_0723cbf4_caseD_1a;
        }
        if (in_w10 == 0x25bc) {
          uVar4 = 0x1f;
          goto switchD_0723cbf4_caseD_1a;
        }
      }
      else {
        if (in_w10 == 0x25c4) {
          uVar4 = 0x11;
          goto switchD_0723cbf4_caseD_1a;
        }
        if (in_w10 == 0x25cb) {
LAB_0723cf94:
          uVar4 = 9;
          goto switchD_0723cbf4_caseD_1a;
        }
      }
    }
    else {
      if (in_w10 == 0x25a0) {
LAB_0723cf9c:
        uVar4 = 0xfe;
        goto switchD_0723cbf4_caseD_1a;
      }
      if (in_w10 == 0x25ac) {
        uVar4 = 0x16;
        goto switchD_0723cbf4_caseD_1a;
      }
      if (in_w10 == unaff_w25) {
        uVar4 = 0x1e;
        goto switchD_0723cbf4_caseD_1a;
      }
    }
  }
  else if (in_w10 < 0x2643) {
    if (in_w10 == 0x25d8) {
      uVar4 = 8;
      goto switchD_0723cbf4_caseD_1a;
    }
    if (in_w10 == 0x25d9) {
      uVar4 = 10;
      goto switchD_0723cbf4_caseD_1a;
    }
    uVar4 = in_w10 - 0x263a;
    uVar2 = (ulong)uVar4;
    if ((uVar4 < 9) && ((0x147U >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
      puVar5 = &DAT_01af4c3c;
      goto LAB_0723cdc0;
    }
  }
  else if (in_w10 < 0x266b) {
    if ((int)in_w10 < 0x2664) {
      if (in_w10 - 0x2661 < 2) goto switchD_0723cbf4_caseD_80;
      if (in_w10 == 0x2660) {
        uVar4 = 6;
        goto switchD_0723cbf4_caseD_1a;
      }
      if (in_w10 == 0x2663) {
        uVar4 = 5;
        goto switchD_0723cbf4_caseD_1a;
      }
    }
    else {
      if (in_w10 == 0x2664) goto switchD_0723cbf4_caseD_80;
      if (in_w10 == 0x2665) {
        uVar4 = 3;
        goto switchD_0723cbf4_caseD_1a;
      }
      if (in_w10 == 0x2666) {
        uVar4 = 4;
        goto switchD_0723cbf4_caseD_1a;
      }
    }
    if (in_w10 == 0x266a) {
      uVar4 = 0xd;
      goto switchD_0723cbf4_caseD_1a;
    }
  }
  else {
    if ((int)in_w10 < 0xffeb) {
      if ((int)in_w10 < 0xffe9) {
        if (in_w10 == 0x266b) {
          uVar4 = 0xe;
          goto switchD_0723cbf4_caseD_1a;
        }
        if (in_w10 == 0xffe8) goto LAB_0723cdf0;
      }
      else {
        if (in_w10 == 0xffe9) {
          uVar4 = 0x1b;
          goto switchD_0723cbf4_caseD_1a;
        }
        if (in_w10 == 0xffea) {
          uVar4 = 0x18;
          goto switchD_0723cbf4_caseD_1a;
        }
      }
    }
    else if ((int)in_w10 < 0xffed) {
      if (in_w10 == 0xffeb) goto switchD_0723cbf4_caseD_1c;
      if (in_w10 == 0xffec) {
        uVar4 = 0x19;
        goto switchD_0723cbf4_caseD_1a;
      }
    }
    else {
      if (in_w10 == 0xffed) goto LAB_0723cf9c;
      if (in_w10 == 0xffee) goto LAB_0723cf94;
    }
    if (0xffa1 < (in_w10 + 0xa1 & 0xffff)) {
      uVar4 = in_w10 + 0x20;
      goto switchD_0723cbf4_caseD_1a;
    }
  }
switchD_0723cbf4_caseD_80:
  uStack0000000000000000 = 0;
  param_1 = FUN_07233824();
  in_w8 = iStack0000000000000014;
  do {
    iStack0000000000000014 = in_w8 + 1;
    in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + -1;
    if (in_stack_00000018._4_4_ < 1) {
      return (ulong)uStack0000000000000010;
    }
    uVar1 = *(ushort *)(unaff_x20 + (long)iStack0000000000000014 * 2);
    in_w10 = (uint)uVar1;
    uVar3 = (uint)uVar1;
    uVar4 = uVar3;
    in_w8 = iStack0000000000000014;
    if (0x19 < uVar1) {
      uVar4 = (uint)uVar1;
      if (unaff_w22 < uVar1) {
        uVar1 = uVar1 >> 2;
        if (0x964 < uVar1) {
          in_CY = 0x971 < uVar1;
          in_ZR = uVar1 == 0x972;
          goto code_r0x0723c95c;
        }
        if (unaff_w27 < uVar3) {
          if (uVar3 < 0x256d) {
            if (uVar3 == 0x2524) {
              uVar4 = 0xb4;
            }
            else if (uVar3 == 0x252c) {
              uVar4 = 0xc2;
            }
            else {
              uVar2 = (ulong)(uVar4 - 0x2534);
              if ((0x38 < uVar4 - 0x2534) || ((0x1fffffff0000101U >> (uVar2 & 0x3f) & 1) == 0))
              goto switchD_0723cbf4_caseD_80;
              puVar5 = &DAT_01af4c00;
LAB_0723cdc0:
              uVar4 = (uint)(byte)puVar5[uVar2];
            }
          }
          else if (uVar4 < 0x2585) {
            if (uVar3 == 0x2580) {
              uVar4 = 0xdf;
            }
            else {
              if (uVar4 != 0x2584) goto switchD_0723cbf4_caseD_80;
              uVar4 = 0xdc;
            }
          }
          else if (uVar4 == 0x2588) {
            uVar4 = 0xdb;
          }
          else {
            uVar3 = uVar3 - 0x258c;
            if ((7 < uVar3) || ((0xf1U >> (ulong)(uVar3 & 0x1f) & 1) == 0))
            goto switchD_0723cbf4_caseD_80;
            uVar4 = (uint)(0xb2b1b0dedddddddd >> ((ulong)(uVar3 * 8) & 0x3f));
          }
        }
        else if (unaff_w29 < uVar3) {
          if (uVar4 == 0x2514) {
            uVar4 = 0xc0;
          }
          else if (uVar3 == 0x2518) {
            uVar4 = 0xd9;
          }
          else {
            if (uVar3 != unaff_w27) goto switchD_0723cbf4_caseD_80;
            uVar4 = 0xc3;
          }
        }
        else if (uVar3 == 0x2502) {
LAB_0723cdf0:
          uVar4 = 0xb3;
        }
        else if (uVar3 == 0x250c) {
          uVar4 = 0xda;
        }
        else {
          if (uVar4 != unaff_w29) goto switchD_0723cbf4_caseD_80;
          uVar4 = 0xbf;
        }
      }
      else if (uVar1 < unaff_w24 || uVar3 == unaff_w24) {
        if (uVar3 < 0x3a7) {
          if (uVar3 < 0x394) {
            uVar4 = 0x7f;
            switch(uVar1) {
            case 0x1a:
              break;
            case 0x1b:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3a:
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x41:
            case 0x42:
            case 0x43:
            case 0x44:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
            case 0x4e:
            case 0x4f:
            case 0x50:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x54:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
            case 0x59:
            case 0x5a:
            case 0x5b:
            case 0x5c:
            case 0x5d:
            case 0x5e:
            case 0x5f:
            case 0x60:
            case 0x61:
            case 0x62:
            case 99:
            case 100:
            case 0x65:
            case 0x66:
            case 0x67:
            case 0x68:
            case 0x69:
            case 0x6a:
            case 0x6b:
            case 0x6c:
            case 0x6d:
            case 0x6e:
            case 0x6f:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
            case 0x74:
            case 0x75:
            case 0x76:
            case 0x77:
            case 0x78:
            case 0x79:
            case 0x7a:
            case 0x7b:
            case 0x7c:
            case 0x7d:
            case 0x7e:
              uVar4 = (uint)uVar1;
              break;
            case 0x1c:
switchD_0723cbf4_caseD_1c:
              uVar4 = 0x1a;
              break;
            case 0x7f:
switchD_0723cbf4_caseD_7f:
              uVar4 = 0x1c;
              break;
            case 0x80:
            case 0x81:
            case 0x82:
            case 0x83:
            case 0x84:
            case 0x85:
            case 0x86:
            case 0x87:
            case 0x88:
            case 0x89:
            case 0x8a:
            case 0x8b:
            case 0x8c:
            case 0x8d:
            case 0x8e:
            case 0x8f:
            case 0x90:
            case 0x91:
            case 0x92:
            case 0x93:
            case 0x94:
            case 0x95:
            case 0x96:
            case 0x97:
            case 0x98:
            case 0x99:
            case 0x9a:
            case 0x9b:
            case 0x9c:
            case 0x9d:
            case 0x9e:
            case 0x9f:
            case 0xa1:
            case 0xa5:
            case 0xa9:
            case 0xaa:
            case 0xad:
            case 0xae:
            case 0xb5:
            case 0xb9:
            case 0xba:
            case 0xbf:
            case 0xc1:
            case 0xc3:
            case 0xc4:
            case 0xc5:
            case 0xc6:
            case 0xcc:
            case 0xcd:
            case 0xd0:
            case 0xd1:
            case 0xd2:
            case 0xd3:
            case 0xd5:
            case 0xd6:
            case 0xd7:
            case 0xd8:
            case 0xda:
            case 0xdd:
            case 0xde:
            case 0xe1:
            case 0xe3:
            case 0xe4:
            case 0xe5:
            case 0xe6:
            case 0xec:
            case 0xed:
            case 0xf0:
            case 0xf1:
            case 0xf2:
            case 0xf5:
            case 0xf6:
            case 0xf8:
              goto switchD_0723cbf4_caseD_80;
            case 0xa0:
              uVar4 = 0xff;
              break;
            case 0xa2:
              uVar4 = 0x9b;
              break;
            case 0xa3:
              uVar4 = 0x9c;
              break;
            case 0xa4:
              uVar4 = 0x98;
              break;
            case 0xa6:
              uVar4 = 0xa0;
              break;
            case 0xa7:
              uVar4 = 0x8f;
              break;
            case 0xa8:
              uVar4 = 0xa4;
              break;
            case 0xab:
              uVar4 = 0xae;
              break;
            case 0xac:
              uVar4 = 0xaa;
              break;
            case 0xaf:
              goto switchD_0723cbf4_caseD_af;
            case 0xb0:
              uVar4 = 0xf8;
              break;
            case 0xb1:
              uVar4 = 0xf1;
              break;
            case 0xb2:
              uVar4 = 0xfd;
              break;
            case 0xb3:
              uVar4 = 0xa6;
              break;
            case 0xb4:
              uVar4 = 0xa1;
              break;
            case 0xb6:
              uVar4 = 0x86;
              break;
            case 0xb7:
              uVar4 = 0xfa;
              break;
            case 0xb8:
              uVar4 = 0xa5;
              break;
            case 0xbb:
              uVar4 = 0xaf;
              break;
            case 0xbc:
              uVar4 = 0xac;
              break;
            case 0xbd:
              uVar4 = 0xab;
              break;
            case 0xbe:
              uVar4 = 0xad;
              break;
            case 0xc0:
              uVar4 = 0x8e;
              break;
            case 0xc2:
              uVar4 = 0x84;
              break;
            case 199:
              uVar4 = 0x80;
              break;
            case 200:
              uVar4 = 0x91;
              break;
            case 0xc9:
              uVar4 = 0x90;
              break;
            case 0xca:
              uVar4 = 0x92;
              break;
            case 0xcb:
              uVar4 = 0x94;
              break;
            case 0xce:
              uVar4 = 0xa8;
              break;
            case 0xcf:
              uVar4 = 0x95;
              break;
            case 0xd4:
              uVar4 = 0x99;
              break;
            case 0xd9:
              uVar4 = 0x9d;
              break;
            case 0xdb:
              uVar4 = 0x9e;
              break;
            case 0xdc:
              uVar4 = 0x9a;
              break;
            case 0xdf:
              uVar4 = 0xe1;
              break;
            case 0xe0:
              uVar4 = 0x85;
              break;
            case 0xe2:
              uVar4 = 0x83;
              break;
            case 0xe7:
              uVar4 = 0x87;
              break;
            case 0xe8:
              uVar4 = 0x8a;
              break;
            case 0xe9:
              uVar4 = 0x82;
              break;
            case 0xea:
              uVar4 = 0x88;
              break;
            case 0xeb:
              uVar4 = 0x89;
              break;
            case 0xee:
              uVar4 = 0x8c;
              break;
            case 0xef:
              uVar4 = 0x8b;
              break;
            case 0xf3:
              uVar4 = 0xa2;
              break;
            case 0xf4:
              uVar4 = 0x93;
              break;
            case 0xf7:
              uVar4 = 0xf6;
              break;
            case 0xf9:
              uVar4 = 0x97;
              break;
            case 0xfa:
              uVar4 = 0xa3;
              break;
            case 0xfb:
              uVar4 = 0x96;
              break;
            case 0xfc:
              uVar4 = 0x81;
              break;
            default:
              if (uVar3 == 0x192) {
                uVar4 = 0x9f;
              }
              else {
                if (uVar3 != 0x393) goto switchD_0723cbf4_caseD_80;
                uVar4 = 0xe2;
              }
            }
          }
          else if (uVar3 == 0x398) {
            uVar4 = 0xe9;
          }
          else if (uVar3 == 0x3a3) {
            uVar4 = 0xe4;
          }
          else {
            if (uVar3 != 0x3a6) goto switchD_0723cbf4_caseD_80;
            uVar4 = 0xe8;
          }
        }
        else if (uVar3 < 0x3bd) {
          if (uVar3 == 0x3a9) {
            uVar4 = 0xea;
          }
          else if (uVar3 == 0x3b3 || uVar1 < 0x3b3) {
            if (uVar3 - 0x3b2 < 2) goto switchD_0723cbf4_caseD_80;
            if (uVar3 == 0x3b1) {
              uVar4 = 0xe0;
            }
            else {
LAB_0723cfc4:
              if (uVar3 != 0x3bc) goto switchD_0723cbf4_caseD_80;
              uVar4 = 0xe6;
            }
          }
          else if (uVar3 == 0x3b4) {
            uVar4 = 0xeb;
          }
          else {
            if (uVar3 != 0x3b5) goto LAB_0723cfc4;
            uVar4 = 0xee;
          }
        }
        else if (uVar1 >> 3 < 0x403) {
          if (uVar3 == 0x3c3 || uVar1 < 0x3c3) {
            if (uVar3 - 0x3c1 < 2) goto switchD_0723cbf4_caseD_80;
            if (uVar3 == 0x3c0) {
              uVar4 = 0xe3;
            }
            else if (uVar3 == 0x3c3) {
              uVar4 = 0xe5;
            }
            else {
LAB_0723d000:
              if (uVar3 != 0x2017) goto switchD_0723cbf4_caseD_80;
              uVar4 = 0x8d;
            }
          }
          else if (uVar3 == 0x3c4) {
            uVar4 = 0xe7;
          }
          else {
            if (uVar3 == 0x3c5) goto switchD_0723cbf4_caseD_80;
            if (uVar3 != 0x3c6) goto LAB_0723d000;
            uVar4 = 0xed;
          }
        }
        else if (uVar3 == 0x2022) {
          uVar4 = 7;
        }
        else {
          if (uVar3 != unaff_w24) goto switchD_0723cbf4_caseD_80;
          uVar4 = 0x13;
        }
      }
      else if (unaff_w23 < uVar3) {
        if (unaff_w28 < uVar3) {
          if (uVar3 < 0x2321) {
            if (uVar3 == 0x2310) {
              uVar4 = 0xa9;
            }
            else {
              if (uVar4 != 0x2320) goto switchD_0723cbf4_caseD_80;
              uVar4 = 0xf4;
            }
          }
          else if (uVar4 == 0x2321) {
            uVar4 = 0xf5;
          }
          else {
            if (uVar4 != unaff_w22) goto switchD_0723cbf4_caseD_80;
            uVar4 = 0xc4;
          }
        }
        else if (uVar3 == 0x2248) {
          uVar4 = 0xf7;
        }
        else if (uVar3 == 0x2263 || uVar1 < 0x2263) {
          if (uVar3 - 0x2262 < 2) goto switchD_0723cbf4_caseD_80;
          if (uVar3 == 0x2261) {
            uVar4 = 0xf0;
          }
          else {
LAB_0723cfb4:
            if (uVar3 != unaff_w28) goto switchD_0723cbf4_caseD_80;
            uVar4 = 0x7f;
          }
        }
        else if (uVar3 == 0x2264) {
          uVar4 = 0xf3;
        }
        else {
          if (uVar3 != 0x2265) goto LAB_0723cfb4;
          uVar4 = 0xf2;
        }
      }
      else if (uVar3 < 0x2196) {
        if (uVar3 == 0x203e) {
switchD_0723cbf4_caseD_af:
          uVar4 = 0xa7;
        }
        else if (uVar3 == 0x207f) {
          uVar4 = 0xfc;
        }
        else {
          if (5 < uVar3 - 0x2190) goto switchD_0723cbf4_caseD_80;
          uVar4 = (uint)(0x121d191a181b >> ((ulong)((uVar3 - 0x2190) * 8) & 0x3f));
        }
      }
      else if (uVar3 == 0x21a8) {
        uVar4 = 0x17;
      }
      else if (uVar1 < 0x221b) {
        if (uVar3 == 0x2219) {
          uVar4 = 0xf9;
        }
        else {
          if (uVar3 != 0x221a) goto LAB_0723cfdc;
          uVar4 = 0xfb;
        }
      }
      else {
        if (uVar3 - 0x221b < 3) goto switchD_0723cbf4_caseD_80;
        if (uVar3 == 0x221e) {
          uVar4 = 0xec;
        }
        else {
          if (uVar3 == 0x221f) goto switchD_0723cbf4_caseD_7f;
LAB_0723cfdc:
          if (uVar3 != unaff_w23) goto switchD_0723cbf4_caseD_80;
          uVar4 = 0xef;
        }
      }
    }
switchD_0723cbf4_caseD_1a:
    if (unaff_w26 != 0xcf) {
      if (unaff_w26 != 0) {
        return param_1;
      }
      *(char *)((int)uStack0000000000000010 + unaff_x19) = (char)uVar4;
      in_w8 = iStack0000000000000014;
    }
    uStack0000000000000010 = uStack0000000000000010 + 1;
  } while( true );
}


